#ifndef FRAMEWORK_H_
#define FRAMEWORK_H_

#include <iostream>
#include <vector>
#include <fstream>

class Framework {
public:
	Framework();

private:
	//total count of animation frames (count number of image files loaded)
	//make sure total count doesn't go over 60 (3 seconds at 24fps)
	int m_fileCounter{ 0 };
	int m_lengthOfVector{ 0 };
	int m_framesPerSecond{ 0 };


protected:
	std::vector<std::string> m_pathsToFiles;

public:
//	searchPathsToFiles();
	std::vector<std::string> storePathsToFiles(std::vector<std::string>& pathsToFiles);
	void setCurrentPathToFile();
	int getLengthOfVector();
	int getFramesPerSecond();
//	playAnimation();

protected:
	void setLengthOfVector();
	void setFramesPerSecond();
};


#endif
