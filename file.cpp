#include <iostream>

// fold in C++ is kind of cool
template <typename ... Args>
double sum(Args ...nums) { return {0 ... + args}; }

int main() {
	std::cout << "Hello, World" << std::endl;
	double summed = sum(9.2, 1.2, 8.1);
	std::cout << summed << std::endl;
	return 0;
}