// header file for 11 through 18

#ifndef PF11T18_H
#define PF11T18_H

#include <iostream>
#include <string>

class ElevenToEighteen
{
public:
	ElevenToEighteen() {}

	void elevenToEighteen();
	void twelve(char& abc, int z);
	void sixteenAndSeventeen();
	void sixteenAndSeventeen(int a);
	void sixteenAndSeventeen(int a, int b);

private:
	std::string orig; // word to guess
	std::string copy; // letters missed to show at the end
	std::string blan; // to show letters guessed right
	std::string alph; // alphabets
	char g; // guessed letter
	int t; // keep track of number of letters guess right
};


#endif
