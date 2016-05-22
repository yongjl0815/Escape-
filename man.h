

#ifndef MAN_H
#define MAN_H

#include <iostream>

namespace LeeBase
{
	class Man
	{
	public:
		Man() {}
		Man(int phy);
		Man(const Man &cc);
	
		int getPhy() const;
		int getInt() const;
		int getPower() const;
		virtual int winner();

		~Man();

	protected:
		int *p1;
		int *p2;
		int physical;
		int intelligence;
		int power;
	};

	bool operator < (const Man& a, const Man& b);
}

#endif
