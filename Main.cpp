#include <iostream>
#include <string>

int main()
{
		std::string A = "HelloWorld!";

	std::cout << A << "\n"; //выведем строку A
	std::cout << A.length() << "\n"; //выведем количество символов в строке A
	std::cout << A[0] << "\n"; //выведем первый символ в строке A
	std::cout << A[A.length() - 1] << "\n"; //выведем последний символ в строке A

	std::cin;
	return 0;
}