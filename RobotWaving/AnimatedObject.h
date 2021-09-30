#ifndef ANIMATEDOBJECT_H_
#define ANIMATEDOBJECT_H_

#include <iostream>
#include <vector>
#include <chrono>
#include <sstream>
#include <fstream>
#include "InputFramework.h"

class AnimatedObject { 
public:
	AnimatedObject();

private:
	//total count of animation frames (count number of image files loaded)
	//make sure total count doesn't go over 60 (3 seconds at 24fps)
	int m_fileCounter{ 0 };
	int m_lengthOfVector{ 0 };
	int m_framesPerSecond{ 0 };
	InputFramework inputFramework;


protected:
	int m_waitTime{ 1 };


protected:
	std::vector<std::string> m_pathsToFiles;

public:
	//	searchPathsToFiles();
	std::vector<std::string> storePathsToFiles(std::vector<std::string>& pathsToFiles);
	void setCurrentPathToFile();
	int getLengthOfVector();
	int getFramesPerSecond();
	int getWaitTime();

private:
	bool handleFPSInputErrors(int framesPerSecond);

protected:
	void setLengthOfVector();
	void setFramesPerSecond();
	void setWaitTime();
};


#endif