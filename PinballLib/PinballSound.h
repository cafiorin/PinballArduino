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

#if !defined(EA_8896A5EB_6969_48d6_BF77_D6C2368F05C6__INCLUDED_)
#define EA_8896A5EB_6969_48d6_BF77_D6C2368F05C6__INCLUDED_

#include <SFEMP3Shield\\SFEMP3Shield.h>

#define MP3_STARTBUTTONPORT "engine1.mp3"
#define MP3_RSLINGSHOT "sling01m.mp3"
#define MP3_LSLINGSHOT "sling02m.mp3"
#define MP3_R1BUTTONPORT "b1.mp3"
#define MP3_Y1BUTTONPORT "b2.mp3"
#define MP3_G1BUTTONPORT "b3.mp3"
#define MP3_RBUMPER "bump03.mp3"
#define MP3_CBUMPER "bump04.mp3"
#define MP3_LBUMPER "bump03.mp3"
#define MP3_NEXTBALLPORT "newba00.mp3"
#define MP3_OUTBALLPORT "newba00.mp3"
#define MP3_LAUNCHBALLPORT "laun.mp3"
#define MP3_GAMEOVER "gameov2.mp3"
#define MP3_EXTRABALL "newba01.mp3"
#define MP3_HIGHSCORE "high1.mp3"
#define MP3_EXTRAPOINT "yahoo.mp3"
#define MP3_THEME "theme.mp3"
#define MP3_DROPTARGET51 "drop51.mp3"
#define MP3_DROPTARGET52 "drop52.mp3"
#define MP3_DROPTARGET53 "drop53.mp3"
#define MP3_DROPTARGET54 "drop54.mp3"
#define MP3_DROPTARGET55 "drop55.mp3"
#define MP3_RAMPIN "rampin.mp3"
#define MP3_RAMPOUT1 "rampo1.mp3"
#define MP3_RAMPOUT2 "rampo2.mp3"

#define MP3_DROPTARGET31 "here.mp3"
#define MP3_DROPTARGET32 "aer.mp3"
#define MP3_DROPTARGET33 "god.mp3"

#define MP3_HAHAHA1 "hahaha.mp3"
#define MP3_HAHAHA2 "hahaha2.mp3"
#define MP3_HAHAHA3 "haha3.mp3"
#define MP3_GOD "god.mp3"
#define MP3_DOG "whold.mp3"
#define MP3_YAHOO "yahoo2.mp3"


class PinballSound
{

public:
	PinballSound(SFEMP3Shield *mp3Player);
	virtual ~PinballSound();
	void playSong(char song []);
	void setVolume(unsigned char volume);
	void setVolume(unsigned char volume, bool plus);

protected:
	SFEMP3Shield *m_mp3Player;

};
#endif // !defined(EA_8896A5EB_6969_48d6_BF77_D6C2368F05C6__INCLUDED_)
