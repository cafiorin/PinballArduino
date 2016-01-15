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

#include "PinballDisplay.h"

//-------------------------------------------------------//
PinballDisplay::PinballDisplay()
//-------------------------------------------------------//
{
	ht1632_setup();
	clearDisplay(0);
}

//-------------------------------------------------------//
PinballDisplay::~PinballDisplay()
//-------------------------------------------------------//
{
}

//-------------------------------------------------------//
void PinballDisplay::clearDisplay()
//-------------------------------------------------------//
{
	clearDisplay(0);
}

//-------------------------------------------------------//
void PinballDisplay::clearDisplay(int line)
//-------------------------------------------------------//
{
	if (line == 0) // Clear All
	{
		textcolor1(0, 1, "        ", RED, 1);
		textcolor1(0, 9, "        ", GREEN, 1);
	}
	else if (line == 1)
	{
		textcolor1(0, 1, "        ", RED, 1);
	}
	else
	{
		textcolor1(0, 9, "        ", GREEN, 1);
	}

}

//-------------------------------------------------------//
void PinballDisplay::printText(char *text1, char *text2, char font)
//-------------------------------------------------------//
{
	clearDisplay(0);
	textcolor1(1, 1, text1, RED, font);
	textcolor1(1, 8+font, text2, GREEN, font);
}
