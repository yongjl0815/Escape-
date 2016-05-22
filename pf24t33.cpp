


#include <iostream>
#include "pf24t33.h"

namespace LeeBase
{
	TwentyfourToThirtythree::TwentyfourToThirtythree(int phy)
	{
		p1 = new int;
		*p1 = phy;
		p2 = new int;
		*p2 = 10;
	}

	TwentyfourToThirtythree::TwentyfourToThirtythree(const TwentyfourToThirtythree &cc)
	{
		p1 = new int;
		*p1 = *cc.p1;
		p2 = new int;
		*p2 = *cc.p2;
	}

	int TwentyfourToThirtythree::winner()
	{
		power = (*p1 + *p2) * 1000;
	
	}

	TwentyfourToThirtythree::~TwentyfourToThirtythree()
	{
		delete p1;
		delete p2;
	}
}
