#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <fstream>
#include <thread>
#include <memory>
#include "AnimatedObject.h"

class Character : public AnimatedObject {
public:
	Character();

private:
	std::ifstream m_animationFile;
	std::string m_pathToFrame{ "Don Quoixte(?)" };
	int m_frameCounter{ 0 };

public:
	void printAnimation();

private:
	void printFrame();
	void printNewLines();
	void waitForNextFrame();
	std::string getCurrentPathToFrame(int vectorIndex);

};


#endif