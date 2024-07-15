#include <iostream>

int main(void){
	bool flag = true;
	std::cout << flag << std::endl;

	flag = false;
	std::cout << flag << std::endl;

	std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
	std::cout << "sizeof(flag): " << sizeof(flag) << std::endl;
}
