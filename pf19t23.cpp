

#include <iostream>
#include <string>
#include "pf19t23.h"


void NineteenToTwentythree::nineteenToTwentythree()
{
	int ans;

	std::cout << std::endl << "Next chamber is identical to the room before. The door disappears behind you." << std::endl << std::endl
	<< "'Ice cream not found. Probability of ice cream randomly combusting...zero.'" << std::endl
	<< "'Probability of ice cream never existing...99.99999999999%'" << std::endl
	<< "'Proceeding with the test.'" << std::endl
	<< "'First question. What is the sum of every positive integers below...Meat Container missing intelligence.'" << std::endl
	<< "'Recalculating...What is the sum of every positive integers below 5?" << std::endl;
	std::cin >> ans;
	std::cout << std::endl;

	if (ans == nineteen(5)) 
	{
		std::cout << "'Congratulation. You are correct. *clap* *clap* *clap*'" << std::endl;
	}
	else
	{
		std::cout << "'Meat container's state more problematic than initial diagnosis.'" << std::endl
		<< "'Terminate?... ... ... Another chance given. Meat Container is grateful.'" << std::endl;
	}

	twentyToTwentythree(); 
}


int NineteenToTwentythree::nineteen(int a)
{
	if (a == 1)
	{
		return 1;
	}
	
	else
	{
		return (a + nineteen(a-1));
	}
}


void NineteenToTwentythree::twentyToTwentythree()
{
	int ans;

	std::cout << std::endl << "'Proceeding...Which emotion is most important to you? Input number.'" << std::endl << std::endl;

	std::string* *b = new std::string*[2];
	for (int i=0; i < 2; i++)
	{
		b[i] = new std::string[3];
	}
	
	b[0][0] = "1 - Love"; 
	b[0][1] = "2 - Friendship"; 
	b[0][2] = "3 - Money"; 
	b[1][0] = "4 - Family"; 
	b[1][1] = "5 - All of above"; 
	b[1][2] = "6 - None of above"; 
	
	std::cout << b[0][0] << "\t" << b[0][1] << "\t" << b[0][2] << std::endl
	<< b[1][0] << "\t" << b[1][1] << "\t" << b[1][2] << std::endl << std::endl;

	std::cin >> ans;
	std::cout << std::endl;

	if (ans == 6)
	{
		std::cout << "'Correct answer. All of above do not matter. Only your existence matter.'" << std::endl << std::endl;
	}

	else
	{
		std::cout << "'Incorrect answer.'" << std::endl << std::endl
		<< "You are zapped with a mild electric shock." << std::endl << std::endl;
	}

	for (int j=0; j <2; j++)
	{
		delete[] b[j];
	}
	delete [] b;

}
