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

#if !defined(EA_9FF80377_3F37_48af_BA92_B3441B72BE11__INCLUDED_)
#define EA_9FF80377_3F37_48af_BA92_B3441B72BE11__INCLUDED_

class PinballObject;
#include "PinballSerial.h"
#include "PinballSound.h"
#include "PinballDisplay.h"

#define MAXPINBALLOBJECTS 50

class Pinball
{

public:
	Pinball(PinballSerial *pinballSerial,PinballSound *pinballSound,bool thereIsDisplay);
	virtual ~Pinball();
	virtual void loop();
	virtual void Init();
	void AddPinballObject(PinballObject *pinbObj);

private:
	PinballObject *m_PinballObjects[MAXPINBALLOBJECTS];
	int m_contObj;
	PinballSerial *m_pinballSerial;
	PinballSound *m_pinballSound;
	PinballDisplay *m_pinballdisplay;
};
#endif // !defined(EA_9FF80377_3F37_48af_BA92_B3441B72BE11__INCLUDED_)
