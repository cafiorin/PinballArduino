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

#include "Output.h"


//-------------------------------------------------------//
Output::Output(Pinball *pinball,int port):Port(pinball,port)
//-------------------------------------------------------//
{
}

//-------------------------------------------------------//
Output::~Output()
//-------------------------------------------------------//
{
}

//-------------------------------------------------------//
void Output::Init()
//-------------------------------------------------------//
{
    pinMode(m_portNumber, OUTPUT);
	TurnOff();
}

//-------------------------------------------------------//
void Output::TurnOn()
//-------------------------------------------------------//
{
	if(m_enabled)
	{
		m_turnOn = true;
		digitalWrite(m_portNumber, HIGH);
	}
}

//-------------------------------------------------------//
void Output::TurnOff()
//-------------------------------------------------------//
{
	if(m_enabled)
	{
		m_turnOn = false;
		digitalWrite(m_portNumber, LOW);
	}
}
