#include "Character.h"

Character::Character() {}


void Character::waitForNextFrame() {
	std::this_thread::sleep_for(std::chrono::milliseconds(AnimationFramework::m_waitTime));
}


std::string Character::getCurrentPathToFrame(int vectorIndex) {

	m_pathToFrame = AnimationFramework::m_pathsToFiles[vectorIndex];
	return m_pathToFrame;

}

void Character::printAnimation() {
	for (int i = 0; i < AnimationFramework::getLengthOfVector(); i++) {
		printFrame();
		waitForNextFrame();
		printNewLines();
		m_frameCounter++;
		if (m_frameCounter % AnimationFramework::getLengthOfVector() == 0) {
			m_frameCounter = 0;
		}
	}
}

void Character::printFrame() {
//		std::cout << "your files says: " << m_pathToFrame << "\n";
		m_animationFile.open(getCurrentPathToFrame(m_frameCounter));
		std::cout << m_animationFile.rdbuf();
		m_animationFile.close();
	

}

void Character::printNewLines() {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
