#include "Character.h"

Character::Character() {
	fps = Framework::getFramesPerSecond();

}


void Character::waitForNextFrame() {
	using namespace std::literals;

	//how to get fps to equal a time??
	//I don't know how to convert from a type of int to the std::chrono::second/milliseconds, etc.
	std::this_thread::sleep_for(88.33ms);
}


std::string Character::getCurrentPathToFrame(int vectorIndex) {

	m_pathToFrame = Framework::m_pathsToFiles[vectorIndex];

	std::cout << "Your file says this: " + m_pathToFrame;
	return m_pathToFrame;

}

void Character::printAnimation() {
	for (int i = 0; i < Framework::getLengthOfVector(); i++) {
		printFrame();
		printNewLines();
		waitForNextFrame();
		m_frameCounter++;
		if (m_frameCounter % Framework::getLengthOfVector() == 0) {
			m_frameCounter = 0;
		}
	}
}

void Character::printFrame() {
	m_animationFile.open(getCurrentPathToFrame(m_frameCounter));
	std::cout << m_animationFile.rdbuf();
	m_animationFile.close();
}

void Character::printNewLines() {
	std::cout << "\n\n\n";
}
