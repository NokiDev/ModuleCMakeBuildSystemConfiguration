#include <iostream>
#include <api_impl.hpp>

int main(int argc, char** argv) {

	std::cout << "Integration test." << std::endl;
	MyAwesomeClass myAwesomeClass;

	std::cout << "Are you awesome ?" << std::endl;
	if (myAwesomeClass.AreYouAwesome()) {
		std::cout << "Definitely" << std::endl;
	}
	else {
		std::cout << "No you don't" << std::endl;
	}

	system("pause");

	return 0;
}