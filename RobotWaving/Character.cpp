#include "Character.h"

Character::Character() {}


void Character::waitForNextFrame() {
	int number = AnimatedObject::m_waitTime;
	std::this_thread::sleep_for(std::chrono::milliseconds(AnimatedObject::m_waitTime));
}


std::string Character::getCurrentPathToFrame(int vectorIndex) {

	m_pathToFrame = AnimatedObject::m_pathsToFiles[vectorIndex];
	return m_pathToFrame;

}

void Character::printAnimation() {
	for (int i = 0; i < AnimatedObject::getLengthOfVector(); i++) {
		printFrame();
		waitForNextFrame();
		//		clearScreen();
		printNewLines();
		m_frameCounter++;
		if (m_frameCounter % AnimatedObject::getLengthOfVector() == 0) {
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
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}