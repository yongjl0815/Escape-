
#include <iostream>
#include <string>
#include <cstdlib>
#include "pf1t10.h"

void OneToTen::oneToThree()
{
	int ans1, ans2;
	std::cout << "'What is the decimal value of binary number 10100101?'" << std::endl;
	std::cin >> ans1; 
	std::cin.ignore(1000, '\n');

	std::cout << "'What is the Two's complement value of binary number 10100101?'" << std::endl;
	std::cin >> ans2; 
	std::cin.ignore(1000, '\n');

	std::cout << "'...You answers irrelevant and...ignored.'" << std::endl
	<< "'Answers were 165 and -91. Correctness trivial for this test. Your processor functioning. Ready to proceed.'" << std::endl
	<< "'Meat Container's last memory " <<__DATE__<<"'"<< std::endl << std::endl; 
}

void OneToTen::fourToSix()
{
	std::cout << "'Now provide your name and age for the record.'" << std::endl 
	<< "'Name?'" << std::endl;
	getline(std::cin, name); 

	std::cout << "'Age?' Add a decimal point then 59 for formatting purposes.'" << std::endl;
	std::cin >> age;

	std::cin.ignore(1000, '\n');
	std::cout << "'You name is " << name << " and your age is " << static_cast<int>(age) << "'" << std::endl << std::endl; 
}

void OneToTen::sevenToTen()
{
	std::string ans, noMatter;

	std::cout << "'Meat Container, very submissive. Perfect for the test.'" << std::endl
	<< "'Sensing curiosity from Meat Container. Unsatisfactory with its description.'" << std::endl;

	do
	{
		std::cout << "'Do you want your name to be your description?'" << std::endl;
		std::cin >> ans;

		if(ans != "10100101") 
		{
			std::cout << "'Answer not satisfactory, not accepted.'" << std::endl
			<< "'You must answer using more logical form of communication. 165'" << std::endl;
		}
	}
	while (ans != "10100101"); 

	srand(time(NULL));

	std::cout << "'Meat Container's status vital to the test.'" << std::endl
	<< "'It is acceptable for your description to change to " << rand() % 9999 + 1000 << ". Is this acceptable?'" << std::endl; // 10. random number
	std::cin >> noMatter;
	
	std::cout << "'Answer not accepted. Meat Container displaying defiance. Null answer would've accepted.'" << std::endl
	<< "'It should be terminated...another chance provided for time saving purposes.'" << std::endl << std::endl;
}
