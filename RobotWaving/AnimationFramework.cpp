#include "AnimationFramework.h"

AnimationFramework::AnimationFramework() {
	m_pathsToFiles = storePathsToFiles(m_pathsToFiles);
	setLengthOfVector();
	setFramesPerSecond();
	setWaitTime();
}

std::vector<std::string> AnimationFramework::storePathsToFiles(std::vector<std::string>& pathsToFrames) {
	pathsToFrames = { "assets/helloWorld1.txt", "assets/helloWorld2.txt", "assets/helloWorld3.txt", "assets/helloWorld4.txt",
					"assets/helloWorld5.txt", "assets/helloWorld6.txt", "assets/helloWorld7.txt", "assets/helloWorld8.txt"};
	return pathsToFrames;
}

void AnimationFramework::setLengthOfVector() { m_lengthOfVector = m_pathsToFiles.size(); }

int AnimationFramework::getLengthOfVector() { return m_lengthOfVector; }

int AnimationFramework::getFramesPerSecond() { return m_framesPerSecond; }

bool AnimationFramework::handleFPSInputErrors(int framesPerSecond) {
	if (framesPerSecond != 12 && framesPerSecond != 24 && framesPerSecond != 30 && framesPerSecond != 60) {
		std::cout << "invalid input, please try again \n";
		return false;
	}
	else {
		std::cout << "Thank you. Enjoy your animation!\n";
		return true;
	}
}

void AnimationFramework::setWaitTime() { m_waitTime = 1000 / m_framesPerSecond; }

int AnimationFramework::getWaitTime() { return m_waitTime; }







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