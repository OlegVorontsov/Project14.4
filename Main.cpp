#include <iostream>
#include <string>

int main()
{
		std::string A = "HelloWorld!";

	std::cout << A << "\n"; //������� ������ A
	std::cout << A.length() << "\n"; //������� ���������� �������� � ������ A
	std::cout << A[0] << "\n"; //������� ������ ������ � ������ A
	std::cout << A[A.length() - 1] << "\n"; //������� ��������� ������ � ������ A

	std::cin;
	return 0;
}