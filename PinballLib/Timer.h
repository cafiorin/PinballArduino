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

#if !defined(EA_83E8068C_AB89_44a0_BA18_048F967479E0__INCLUDED_)
#define EA_83E8068C_AB89_44a0_BA18_048F967479E0__INCLUDED_

#include <inttypes.h>
#include "PinballObject.h"

class Timer : public PinballObject
{

public:
  Timer(Pinball *pinball,unsigned long period, void (*callback)(void));
  Timer(Pinball *pinball,unsigned long period, void (*callback)(void), int repeatCount);
  void Start();
  void Stop();

  virtual void Init();
  virtual void Update();

protected:
	unsigned long m_period;
	int m_repeatCount;
	void (*m_callback)(void);
	unsigned m_lastEventTime;
	int m_count;

private:
	void InitObject(unsigned long period, void (*callback)(), int repeatCount);
};
#endif // !defined(EA_83E8068C_AB89_44a0_BA18_048F967479E0__INCLUDED_)
