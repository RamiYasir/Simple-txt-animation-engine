#include "Character.h"
#include "Framework.h"
#include <chrono>
#include <thread>

int main() {
	
	//using namespace std::literals;

	//std::chrono::time_point<std::chrono::steady_clock> start = std::chrono::steady_clock::now();

	//std::this_thread::sleep_for(1s);

	//std::cout << "1 second has passed\n";

	//std::this_thread::sleep_for(1s);

	//std::cout << "2 second have passed";

	bool isRunning = true;
	Character robot;

	while (isRunning) {
		robot.printAnimation();
	}

	return 0;
}