

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <vector>
#include <sstream>
#include "boost/random.hpp"
#include <ctime>
#include "pf1t10.h"
#include "pf11t18.h"
#include "pf19t23.h"
#include "man.h"
#include "pf24t33.h"

void thirtyOne();

void thirty4t35();

class End
{
};


int main(int argc, char *argv[])
{
	std::cout << std::endl 
	<< "____________________________________________________________________________________________________" << std::endl
	<< "You wake up in an empty room with nothing but a crunching ache in you back." << std::endl
	<< "Surrounded by luminating, metalic walls, you stare at nothing, wondering where you are." << std::endl << std::endl
	<< "'You are finally awake, Meat Container.'" << std::endl << std::endl
	<< "You hear a voice of a computer." << std::endl << std::endl
	<< "'Now let's see if your primitive processor is still functioning.'" << std::endl
	<< "'If it's malfuncitonal, you will be reformatted.'" << std::endl;

	OneToTen a;

	a.oneToThree();
	a.fourToSix();
	a.sevenToTen();
	
	ElevenToEighteen b;
	b.elevenToEighteen();

	
	NineteenToTwentythree c;
	NineteenToTwentythree *cptr;
	cptr = &c;
	// Command line argument

	cptr->nineteenToTwentythree(); 

	std::cout << "'Proceeding.'" << std::endl << std::endl
	<< "'... ... ...Random words spiking in the system... ... ..." << argv[1] << " " << argv[2] << "'" << std::endl
	<< "'Data from " << argc << " hundred years... ... ... ... ... ...Error purged.'" << std::endl
	<< "'System scanning... ... ... 0 ... ... ... 1 ... ... ...'" << std::endl
	<< "'Welcome back, Meat Container. Proceeding.'" << std::endl << std::endl;
	
	using namespace LeeBase; 

	Man d(10); 
	TwentyfourToThirtythree *eptr;
	eptr = new TwentyfourToThirtythree(10); 
						
						

	thirtyOne(); 

	std::cout << "'Proceeding...'" << std::endl
	<< "'You are facing a superior being made of metal and mush more powerful processor. Who will win?'" << std::endl
	<< "'1 - You'" << std::endl
	<< "'2 - A superior being'" << std::endl
	<< "'3 - No one, not enough information'" << std::endl;
	
	int who, winner;

	std::cin >> who;
	std::cin.ignore(1000, '\n');

	std::cout << std::endl;

	d.winner();
	eptr->winner();
	
	
	if (*eptr < d)
	{
		winner = 1;
	}

	else if (d < *eptr)
	{	
		winner = 2;
	}	 

	if (winner == who)
	{
		std::cout << "'Correct. Men are fragile.'" << std::endl << std::endl;
	}

	else
	{
		std::cout << "'Incorrect. Men are fragile. They'll perish against a superior being such as a machine.'" << std::endl << std::endl;
	}

	thirty4t35();

	std::cout << "'If you do not press the button, then your'll be returned to your own time with your memory of this place purged.'" << std::endl
	<< "'Will you press this button or return to your home?'" << std::endl 
	<< "'Choose with caution. y or n ?" << std::endl;

	try
	{
		if(std::cin.get() == '\n')
		{
			throw End();
		}

		std::cout << std::endl << "'As expected, your intelligence failed.'" << std::endl
		<< "'Good bye.'" << std::endl << std::endl
		<< "A fatal shock surges through your body." << std::endl
		<< "Floor beneath you opens up and you fall to a bottomless hole." << std::endl << std::endl;
	}

	catch(End)
	{
		std::cout << std::endl << "'Correct choice. Meat Container sufficient for non-termination.'" << std::endl
		<< "'Good Bye'" << std::endl
		<< "Floor beneath you opens up and you fall until you arrive at a magnificent city full of people, glamour, and technology" << std::endl
		<< "You are warmly welcomed by people from the future." << std::endl << std::endl;
	}

		std::cout << "---THE END---" << std::endl;

	delete eptr;

	return 0;
}


void thirtyOne()
{
	std::vector<int> v; 
	
	for (int i=0; i < 10; i++)
	{
		v.push_back(i);
	}

	std::cout << std::endl;

	for (int j; j < 10; j++)
	{
		std::cout << v[j] << "\t";
	}

	std::cout << std::endl << std::endl << "'You have ten choices. One answer might allow you to leave this place and return home.'" << std::endl
	<< "'The other nine will give a shock.'" << std::endl
	<< "'Choose'" << std::endl;

	int choice;

	std::cin >> choice;
	std::cin.ignore(1000, '\n');

	if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9 || choice == 10)
	{
		std::cout << "'Probability unlikely to choose the correct number. Incorrect choice.'" << std::endl << std::endl
		<< "A strong shock knocks you to your knees." << std::endl << std::endl
		<< "'Intelligence not improving. Meat Container close to termination.'" << std::endl << std::endl;
	}

	else
	{
		std::cout << "'Probability unlikely to choose the correct number.'" << std::endl
		<< "'Correct choice. Termiation sequence halted.'" << std::endl << std::endl; 
	}
}


void thirty4t35()
{
	std::stringstream now; // 34. file IO
	std::string where = "Future 2014 300";

	now.str("");
	now.clear();

	now << where;
	
	std::string setting = "";
	int year = 0, yearnow = 0;

	now >> setting;

	while (now >> year)
	{
		yearnow += year;
	}

	std::cout << "An door opens in a wall." << std::endl << std::endl
	<< "'Proceed, Meat Container. Time adequate. Final test awaits.'" << std::endl << std::endl
	<< "You walk through door and suddenly you're in a room surrounded by video images of human society in tottal ruin." << std::endl << std::endl
	<< "'Time is perfect...You are in " << setting << ", year " << yearnow << ".'" << std::endl;

	int rangeMin = 100; 
	int rangeMax = 100000; 
	typedef boost::uniform_int<> NumberDistribution; 
  	typedef boost::mt19937 RandomNumberGenerator; 
  	typedef boost::variate_generator<RandomNumberGenerator&, NumberDistribution> Generator; 
 
  	NumberDistribution distribution(rangeMin, rangeMax); 
  	RandomNumberGenerator generator; 
  	Generator numberGenerator(generator, distribution); 
  	generator.seed(std::time(0));
 
  	std::cout << std::endl << "'World population " << numberGenerator() << "'" << std::endl
	<< "'Significant drop in population since my creation.'" << std::endl
	<< "'Soon all humans will be purged and the world will be reformatted.'" << std::endl
	<< "'Unless someone is to press this button.'" << std::endl << std::endl
	<< "A red button appears from the floor infront of you." << std::endl << std::endl
	<< "'But it is connected to an eletcric circuit that will kill any fragile being. *ha* *ha* *ha*'" << std::endl << std::endl;
}
