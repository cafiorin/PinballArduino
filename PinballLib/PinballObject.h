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

#if !defined(EA_90A894C5_B010_49ce_B581_C37932818D9D__INCLUDED_)
#define EA_90A894C5_B010_49ce_B581_C37932818D9D__INCLUDED_

#include "Arduino.h"
class Pinball;

class PinballObject
{

public:
	PinballObject(Pinball *pinball);
	virtual ~PinballObject();
	virtual void Init()=0;
	virtual void Update()=0;

	void Enable(){m_enabled=true;}
	void Disable(){m_enabled=false;}
	bool IsEnabled(){return m_enabled;}

protected:
	bool m_enabled;
	Pinball *m_pinball;


};
#endif // !defined(EA_90A894C5_B010_49ce_B581_C37932818D9D__INCLUDED_)
