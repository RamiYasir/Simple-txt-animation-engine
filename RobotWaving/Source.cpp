#include <iostream>
#include <vector>
#include <chrono>
#include <sstream>
#include <fstream>
#include "AnimatedObject.h"
#include "InputFramework.h"
#include "Character.h"


int main() {
	
	using namespace std::chrono_literals;

	bool isRunning = true;
	Character robot;

	while (isRunning) {
		robot.printAnimation();
	}

	return 0;
}

