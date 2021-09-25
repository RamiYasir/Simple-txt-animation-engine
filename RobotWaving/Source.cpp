#include "Character.h"
#include "Framework.h"
#include <chrono>
#include <thread>

int main() {
	
	using namespace std::chrono_literals;

	//char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	//int someNumber = 1000 / 24;

	//for (int i = 0; i < 26; i++) {
	//	std::this_thread::sleep_for(std::chrono::milliseconds(someNumber));
	//	std::cout << alphabet[i] << " " << std::endl;
	//}

	bool isRunning = true;
	Character robot;

	while (isRunning) {
		robot.printAnimation();
	}

	return 0;
}

