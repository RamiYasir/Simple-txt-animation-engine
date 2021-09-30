#ifndef INPUTFRAMEWORK_H_
#define INPUTFRAMEWORK_H_

#include <iostream>
#include <sstream>

class InputFramework {
public: 
	InputFramework();

	int setNumberFromOptions(const int numbers[], const int arraySize);
//	void setNumberBetweenValues();
};

InputFramework::InputFramework() {};

int InputFramework::setNumberFromOptions(const int numbers[], const int arraySize) {
	std::string userInput;
	int numbersOption;

	std::cin >> userInput;
	std::stringstream(userInput) >> numbersOption;

	try {
		for (int i = 0; i < arraySize; i++) {
			if (numbersOption == numbers[i]) {
				std::cout << std::endl;
				return numbersOption;
			}
			else return -1;
		}
	}
	catch (const int numbers[]) {
		std::cerr << "ERROR: array overflow, variable \'arraySize\' too big.";
		return -1;
	}
}

#endif
