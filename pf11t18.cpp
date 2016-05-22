// implementation file for 11 through 18

#include <iostream>
#include <string>
#include "pf11t18.h"


void ElevenToEighteen::elevenToEighteen()
{
	std::cout << "'Is your system experiencing errors?'" << std::endl // 11. error categories
	<< "'Observing all three errors.'" << std::endl
	<< "'Syntax error - failing to obey grammatical rule of the world. Obeying to superior beings.'" << std::endl
	<< "'Logical error - even though processing, unable to provide acceptable answer.'" << std::endl
	<< "'Run-time Error - demanding what cannot be done by the computer.'" << std::endl << std::endl;
	
	char ans;
	int num=1;

	twelve(ans, num); // 13. not pre-defined function
		  	  // 14. function decomposition
		  	  // project 3
		  	  // 15. scope, int ans cannot be used outside of function twelve
			  // 16. passing mechanism
			 
	std::cout << "'You entered: " << ans << ".'" << std::endl
	<< "'... ... ...Time faulting. Null answer would've been accepted. We must proceed with the test.'" << std::endl
	<< "'Move to the wall in front of you.'" << std::endl << std::endl;

	std::cout << "A panel appears from the wall." << std::endl << std::endl;

	sixteenAndSeventeen(); // 17. function overloading

	std::cin.ignore(254, '\n');

	std::cout << "'Meat Container allowed to move to the next chamber.'" << std::endl
	<< "'Speak message. Message will be recorded for next Meat Container.'" << std::endl;

	std::string mes;
	
	std::getline(std::cin, mes); // 18. string variable

	std::cout << "'Replaying message.'" << std::endl
	<< "'" << mes << "'" << std::endl
	<< "'...Deleting message. Unnecessary usage of memory.'" << std::endl << std::endl
	<< "An opened door appears." << std::endl << std::endl
	<< "'Proceed to the next chamber. Current room will be purged with radiation in 5, 4, 3...'" << std::endl << std::endl;

}


void ElevenToEighteen::twelve(char& abc, int z)
{
	std::cout << "'It must be limiting to have only " << z << " processor.'" << std::endl
	<< "'Is error interrupting your processing unit, Meat Container?'" << std::endl
	<< "'Let's test. How many years have you been here?'" << std::endl;
	std::cin >> abc;
	
	while(!isalpha(abc)) // 12. debugging
	{
		std::cout << "'ERROR, you cannot answer when answer is unknown to you.'" << std::endl
		<< "'Enter a letter to proceed.'" << std::endl;
		std::cin.clear();
		std::cin.ignore(256,'\n');
		std::cin >> abc;
	}
}


void ElevenToEighteen::sixteenAndSeventeen() // fixed version of Project 2
{

	char yn;
	orig = "compsci";
	copy = "compsci";
	blan = "*******";
	alph = "abcdefghijklmnopqrstuvwxyz";

	std::cout << "'Enter the code to proceed to the next chamber.'" << std::endl 
	<< "'There is ice cream in the next room.'" << std::endl << std::endl; 

	t=0;

	int d1; // just for function overlaoding 
	int d2;
	int d3;

	while (t != orig.length())
	{
		std::cout << "'Use your processor to guess the code, one letter at a time.'" << std::endl
		<< "'Considering your inferior cpu, Helper provided: No capital letters in the code.'" << std::endl
		<< "There are 7 letters in the word." << std::endl;
		std::cin >> g;

		sixteenAndSeventeen(d1);

		std::cout << std::endl;

		sixteenAndSeventeen(d1, d2);

		if (t == orig.length())
		{
			std::cout << "'Code completed. Unexpected result. Computing...'" << std::endl;
		}

		std::cout << std::endl;
	}
}


void ElevenToEighteen::sixteenAndSeventeen(int a)
{
	for(int i=0; i < 26; i++)
	{
		if(g == alph[i])
		{
			alph[i] = '*';
		}
	}
}


void ElevenToEighteen::sixteenAndSeventeen(int a, int b)
{
	int f=0;

	for(int i=0; i < orig.length(); i++)
	{
		if(g == copy[i])
		{
			copy[i] = '*';
			blan[i] = orig[i];
			t++;
			std::cout << "'This letter is a match." << std::endl << std::endl
			<< "'Currently your progress is:'" << std::endl
			<< blan << std::endl
			<< "'and available letters are:'" << std::endl
			<< alph << std::endl;
		}
		else
		{
			f++;
		}
		if(f == orig.length())
		{
			std::cout << "'Your guess yields no match as expected.'" << std::endl
			<< "'Currently your progress is:'" << std::endl
			<< blan << std::endl
			<< "'and available letters are:'" << std::endl
			<< alph << std::endl;
		}
	}

	std::cout << "'So far you have guessed " << t << " letters correctly so far.'" << std::endl << std::endl;
}

