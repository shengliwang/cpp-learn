#include <iostream>


int main(void){
	int a = 10;
	std::cout << a << std::endl;  // 10

	a += 10;
	std::cout << a << std::endl;  // 20

	a /=10;
	std::cout << a << std::endl; // 2
	
	a *= 10;
	std::cout << a << std::endl; // 20

	a %= 10;
	std::cout << a << std::endl; // 0
}
