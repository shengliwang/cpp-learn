#include <iostream>

int main(void){
	int a = 10;
	a = a++ * 10;

	std::cout << a << std::endl; // a = 100

	a = 10;
	int b = ++a * 10;

	std::cout << b << std::endl; // b = 110
	// 100
	// 101
}
