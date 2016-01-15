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

#if !defined(EA_79E2EBCA_DED9_4e01_80B3_1BBCB56303BD__INCLUDED_)
#define EA_79E2EBCA_DED9_4e01_80B3_1BBCB56303BD__INCLUDED_

#include "Output.h"

class Solenoid : public Output
{

public:
	Solenoid(Pinball *pinball,int portNumber);
	virtual ~Solenoid();

};
#endif // !defined(EA_79E2EBCA_DED9_4e01_80B3_1BBCB56303BD__INCLUDED_)
