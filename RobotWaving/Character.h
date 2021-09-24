#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include "Framework.h"

class Character : public Framework{
public:
	Character();

private:
	std::ifstream m_animationFile;
	std::string m_pathToFrame{ "Don Quoixte(?)" };
	int m_frameCounter{ 0 };
	int fps{ 0 };

public:
	void printAnimation();

private:
	void printFrame();
	void printNewLines();
	void waitForNextFrame();
	std::string getCurrentPathToFrame(int vectorIndex);

};


#endif


