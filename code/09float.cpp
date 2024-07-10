#include <iostream>
#include <iomanip>

int main(void){
	float f = 103.14159263333; // 11 位小数
	std::cout << std::setprecision(16) << "float f = " << f << std::endl;

	double d = 103.14159263333; // 11 位小数
	std::cout << std::setprecision(16) << "double d = " << d << std::endl;

	float f2 = 3e2;
	float f3 = 3e-2;

	std::cout << "3e2 = " << f2 << std::endl;
	std::cout << "3e-2 = " << f3 << std::endl;

	return 0;
}
