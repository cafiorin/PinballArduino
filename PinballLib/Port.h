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

#if !defined(EA_6839F9BC_FCE5_403e_AC3C_D7C5DF31399B__INCLUDED_)
#define EA_6839F9BC_FCE5_403e_AC3C_D7C5DF31399B__INCLUDED_

#include "PinballObject.h"

class Port : public PinballObject
{

public:
	Port(Pinball *pinball, int portNumber);
	virtual ~Port();
	void Enable(){m_enabled=true;}
	void Disable(){m_enabled=false;}

protected:
	int m_portNumber;
	virtual void Init()=0;
	bool m_enabled;

};
#endif // !defined(EA_6839F9BC_FCE5_403e_AC3C_D7C5DF31399B__INCLUDED_)
