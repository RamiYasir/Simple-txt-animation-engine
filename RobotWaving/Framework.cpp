#include "Framework.h"

Framework::Framework() {
	m_pathsToFiles = storePathsToFiles(m_pathsToFiles);
	setLengthOfVector();
	setFramesPerSecond();
}

std::vector<std::string> Framework::storePathsToFiles(std::vector<std::string>& pathsToFrames) {
	pathsToFrames = { "assets/helloWorld1.txt", "assets/helloWorld2.txt", "assets/helloWorld3.txt", "assets/helloWorld4.txt",
					"assets/helloWorld5.txt", };
	return pathsToFrames;
}

void Framework::setLengthOfVector() { m_lengthOfVector = m_pathsToFiles.size(); }

int Framework::getLengthOfVector() { return m_lengthOfVector; }

void Framework::setFramesPerSecond() { m_framesPerSecond = 24; }

int Framework::getFramesPerSecond() { return m_framesPerSecond; }









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