


#include <iostream>
#include "man.h"

namespace LeeBase
{
	Man::Man(int phy)
	{
		p1 = new int;
		*p1 = phy;
		p2 = new int;
		*p2 = 10;
	}

	Man::Man(const Man &cc)
	{
		p1 = new int;
		*p1 = *cc.p1;
		p2 = new int;
		*p2 = *cc.p2;
	}

	int Man::getPhy() const
	{
		return *p1;
	}

	int Man::getInt() const
	{
		return *p2;
	}

	int Man::getPower() const
	{
		return power;
	}

	int Man::winner()
	{
		power = *p1 + *p2;
	}

	bool operator < (const Man& a, const Man& b)
	{
		return (a.getPower() < b.getPower());
	}

	Man::~Man()
	{
		delete p1;
		delete p2;
	}
}
