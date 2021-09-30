#include "AnimatedObject.h"
#include "InputFramework.h"
#include "Character.h"
 

int main() {
	bool isRunning = true;
	Character robot;

	while (isRunning) {
		robot.printAnimation();
	}

	return 0;
}

