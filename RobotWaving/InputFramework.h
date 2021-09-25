#ifndef INPUTFRAMEWORK_H_
#define INPUTFRAMEWORK_H_

class InputFramework {
public:
	InputFramework();
	
protected:
	askForDirectoryName();
	collectFileNames();			//this will use the python script
	checkForFileReadErrors();
	void setFramesPerSecond();

};

void InputFramework::setFramesPerSecond() {
	std::string userInput;
	int framesPerSecond;

	do {
		std::cout << "Please choose frames per second:\n60, 30, 24, 12: ";
		std::cin >> userInput;
		std::stringstream(userInput) >> framesPerSecond;

	} while (!handleFPSInputErrors(framesPerSecond));

	m_framesPerSecond = framesPerSecond;

	std::cout << std::endl;


}

#endif // !INPUTFRAMEWORK_H_
