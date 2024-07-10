#include <iostream>

int main(void){
	short 	num1 = 10;
	int 	num2 = 20;
	long 	num3 = 10;
	long long num4 = 10;

	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	std::cout << "num3 = " << num3 << std::endl;
	std::cout << "num4 = " << num4 << std::endl;

	std::cout << "num1 assigned to 32767" << std::endl;
	num1 = 32767;
	std::cout << "num1 = " << num1 << std::endl;

	std::cout << "num1 assigned to 32768" << std::endl;
	num1 = 32768;
	std::cout << "num1 = " << num1 << std::endl;

	std::cout << "in archlinux 64" << std::endl;
	std::cout << "sizeof num1 = " << sizeof(num1) << std::endl;
	std::cout << "sizeof num2 = " << sizeof(num2) << std::endl;
	std::cout << "sizeof num3 = " << sizeof(num3) << std::endl;
	std::cout << "sizeof num4 = " << sizeof(num4) << std::endl;
}
