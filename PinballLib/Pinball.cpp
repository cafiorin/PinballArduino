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

#include "PinballObject.h"
#include "Pinball.h"

//-------------------------------------------------------//
Pinball::Pinball(PinballSerial *pinballSerial,PinballSound *pinballSound,bool thereIsDisplay)
//-------------------------------------------------------//
{
	m_contObj = 0;
	m_pinballSerial = pinballSerial;
	m_pinballSound = pinballSound;
	if(thereIsDisplay)
		m_pinballdisplay = new PinballDisplay();
}

//-------------------------------------------------------//
Pinball::~Pinball()
//-------------------------------------------------------//
{

}

//-------------------------------------------------------//
void Pinball::Init()
//-------------------------------------------------------//
{
	for(int i=0; i < m_contObj; i++)
	{
		m_PinballObjects[i]->Init(); 
	}
}

//-------------------------------------------------------//
void Pinball::loop()
//-------------------------------------------------------//
{
	for(int i=0; i < m_contObj; i++)
	{
		if(m_PinballObjects[i]->IsEnabled()) 
			m_PinballObjects[i]->Update();
	}
}

//-------------------------------------------------------//
void Pinball::AddPinballObject(PinballObject *pinbObj)
//-------------------------------------------------------//
{
	if(m_contObj < MAXPINBALLOBJECTS)
	{
		m_PinballObjects[m_contObj] = pinbObj;
		m_contObj++;
	}

}
