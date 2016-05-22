// header file containing 1 to 10

#ifndef PF1T10_H 
#define PF1T10_H

#include <iostream>
#include <string>

class OneToTen
{
public:
	OneToTen() {}
	
	void oneToThree();
	void fourToSix();
	void sevenToTen();

private:
	std::string name;
	double age;
};

#endif
