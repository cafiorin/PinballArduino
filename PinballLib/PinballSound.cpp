/*
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

/*  * * * * * * * * * * * * * * * * * * * * * * * * * * *
 Code by Cassius Fiorin - cafiorin@gmail.com
 http://pinballhomemade.blogspot.com.br
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "PinballSound.h"

//-------------------------------------------------------//
PinballSound::PinballSound(SFEMP3Shield *mp3Player)
//-------------------------------------------------------//
{
	m_mp3Player = mp3Player;
}

//-------------------------------------------------------//
PinballSound::~PinballSound()
//-------------------------------------------------------//
{
}

//-------------------------------------------------------//
void PinballSound::playSong(char song [])
//-------------------------------------------------------//
{
	if (song != NULL)
    {
		if (m_mp3Player->getState() == playback)
		{
			m_mp3Player->stopTrack();
		}
		m_mp3Player->playMP3(song);
    }
}

//-------------------------------------------------------//
void PinballSound::setVolume(unsigned char volume)
//-------------------------------------------------------//
{
    char szVol[10];
    sprintf(szVol, "%d", volume);
    //printText("Volume", szVol, 0);

	union twobyte mp3_vol;
	mp3_vol.word = m_mp3Player->getVolume();
    volume = volume + mp3_vol.word;
	if (volume >= 254)
        {
			mp3_vol.byte[1] = 254;
		}
    else if (volume <= 2)
        {
            mp3_vol.byte[1] = 2;
        }
    else
        {
			mp3_vol.byte[1] = volume;
		}

	m_mp3Player->setVolume(mp3_vol.byte[1], mp3_vol.byte[1]); // commit new volume

}


//-------------------------------------------------------//
void PinballSound::setVolume(unsigned char volume, bool plus)
//-------------------------------------------------------//
{
	union twobyte mp3_vol; // create key_command existing variable that can be both word and double byte of left and right.
	mp3_vol.word = m_mp3Player->getVolume(); // returns a double uint8_t of Left and Right packed into int16_t

	if (!plus)
    {
        // note dB is negative
        // assume equal balance and use byte[1] for math
        if (mp3_vol.byte[1] + volume >= 254)
            {
            // range check
            mp3_vol.byte[1] = 254;
            }
        else
            {
            mp3_vol.byte[1] += volume; // keep it simpler with whole dB's
            }
    }
	else
	{
		if (mp3_vol.byte[1] - volume <= 2)
		{
			// range check
			mp3_vol.byte[1] = 2;
		}
		else
		{
			mp3_vol.byte[1] -= volume;
		}
	}
	// push byte[1] into both left and right assuming equal balance.
	m_mp3Player->setVolume(mp3_vol.byte[1], mp3_vol.byte[1]); // commit new volume

    //char szVol[10];
    //float fVol = (254 - mp3_vol.byte[1])/25.2;
    //sprintf(szVol, "%1.1f", fVol);
    //printText("Volume", szVol, 0);
}
