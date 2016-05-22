// header file for 24 though 33

#ifndef PF24T33_H
#define PF24T33_h

#include <iostream>
#include "man.h"

namespace LeeBase
{
	class TwentyfourToThirtythree : public Man
	{
	public:
		TwentyfourToThirtythree() {}
		TwentyfourToThirtythree(int phy);
		TwentyfourToThirtythree(const TwentyfourToThirtythree &cc);
		int winner();

		~TwentyfourToThirtythree();

	};
}

#endif
