#include <iostream>
#include <cstring>

int main(void){
	char s[] = "hello s";
	char ps[] = "hello ps";

	std::string str = "hello xxxxx std::string";

	std::cout << "s: " << "\"" << s << "\"\t" << " len: " << sizeof(s) << std::endl;
	std::cout << "ps: " << "\"" << ps << "\"\t" << " len: " << sizeof(ps) << std::endl;
	std::cout << "str: " << "\"" << str << "\"\t" << " len: " << sizeof(str) << " " << sizeof(str.c_str()) << " " << strlen(str.c_str()) << std::endl;
}
