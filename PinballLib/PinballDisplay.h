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

#if !defined(EA_EFA346FD_CFD7_47d9_8E47_68F5AEBF0DC3__INCLUDED_)
#define EA_EFA346FD_CFD7_47d9_8E47_68F5AEBF0DC3__INCLUDED_

#include "ht1632pinball.h"

class PinballDisplay
{

public:
	PinballDisplay();
	virtual ~PinballDisplay();

	void clearDisplay();
	void clearDisplay(int line);
	void printText(char *text1, char *text2, char font);

};
#endif // !defined(EA_EFA346FD_CFD7_47d9_8E47_68F5AEBF0DC3__INCLUDED_)
