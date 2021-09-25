#include "Framework.h"

Framework::Framework() {
	m_pathsToFiles = storePathsToFiles(m_pathsToFiles);
	setLengthOfVector();
	setFramesPerSecond();
	setWaitTime();
}

std::vector<std::string> Framework::storePathsToFiles(std::vector<std::string>& pathsToFrames) {
	pathsToFrames = { "assets/helloWorld1.txt", "assets/helloWorld2.txt", "assets/helloWorld3.txt", "assets/helloWorld4.txt",
					"assets/helloWorld5.txt", "assets/helloWorld6.txt"};
	return pathsToFrames;
}

void Framework::setLengthOfVector() { m_lengthOfVector = m_pathsToFiles.size(); }

int Framework::getLengthOfVector() { return m_lengthOfVector; }

void Framework::setFramesPerSecond() {
	std::string userInput;
	int framesPerSecond;

	do {
		std::cout << "Please choose frames per second:\n60, 30, 24, 12: ";
		std::cin >> userInput;
		std::stringstream(userInput) >> framesPerSecond;

	}while(!handleFPSInputErrors(framesPerSecond));

	m_framesPerSecond = framesPerSecond;
 
	std::cout << std::endl;


	}

int Framework::getFramesPerSecond() { return m_framesPerSecond; }

bool Framework::handleFPSInputErrors(int framesPerSecond) {
	if (framesPerSecond != 12 && framesPerSecond != 24 && framesPerSecond != 30 && framesPerSecond != 60) {
		std::cout << "invalid input, please try again \n";
		return false;
	}
	else {
		std::cout << "Thank you. Enjoy your animation!\n";
		return true;
	}
}

void Framework::setWaitTime() { m_waitTime = 1000 / m_framesPerSecond; }

int Framework::getWaitTime() { return m_waitTime; }







//std::string searchPathsToFiles(int framesCounter) {
//
//	std::string pathToTxtFile;
//
//	//I'm gonna have to write a python or Powershell script that does this i think.
//	//while (framesCounter < 60 || reached end of Directory)	
//	//	if {filepath *txt not located in directory}
//	//		return
//	//	else if{file *.txt located}
//	//		return string-pathToFile
//
//	return pathToTxtFile;
//
//}