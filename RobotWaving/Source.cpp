#include "Character.h"
#include "ANimationFramework.h"
#include <chrono>
#include <thread>

int main() {
	
	using namespace std::chrono_literals;

	bool isRunning = true;
	Character robot;

	while (isRunning) {
		robot.printAnimation();
	}

	return 0;
}

