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

#if !defined(EA_9C5B64AD_0BBC_4a89_B7C5_CB5D6F7D29EA__INCLUDED_)
#define EA_9C5B64AD_0BBC_4a89_B7C5_CB5D6F7D29EA__INCLUDED_

#include "Light.h"
#include "Utils.h"

class LightsSequencer : public Utils
{

public:
	LightsSequencer();
	virtual ~LightsSequencer();

private:
	Light* m_ListLights;

};
#endif // !defined(EA_9C5B64AD_0BBC_4a89_B7C5_CB5D6F7D29EA__INCLUDED_)
