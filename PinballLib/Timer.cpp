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

#include "Timer.h"

//-------------------------------------------------------//
Timer::Timer(Pinball *pinball, unsigned long period, void (*callback)(), int repeatCount):PinballObject(pinball)
//-------------------------------------------------------//
{
	InitObject(period, callback, repeatCount);
}

//-------------------------------------------------------//
Timer::Timer(Pinball *pinball, unsigned long period, void (*callback)()):PinballObject(pinball)
//-------------------------------------------------------//
{
	InitObject(period, callback, -1);
}

//-------------------------------------------------------//
void Timer::InitObject(unsigned long period, void (*callback)(), int repeatCount)
//-------------------------------------------------------//
{
	m_period = period;
	m_repeatCount = repeatCount;
	m_callback = callback;
	m_lastEventTime = millis();
	m_count = 0;
}

//-------------------------------------------------------//
void Timer::Start()
//-------------------------------------------------------//
{
	m_lastEventTime = millis();
	m_count = 0;
	m_enabled = true;
}

//-------------------------------------------------------//
void Timer::Stop()
//-------------------------------------------------------//
{
	m_enabled = false;
}

//-------------------------------------------------------//
void Timer::Init()
//-------------------------------------------------------//
{
	m_lastEventTime = millis();
	m_count = 0;
}

//-------------------------------------------------------//
void Timer::Update()
//-------------------------------------------------------//
{
	unsigned long now = millis();
	if((now-m_lastEventTime) > m_period)
	{
		(*m_callback)();
	}
}

