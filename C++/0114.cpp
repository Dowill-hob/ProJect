#include <iostream>
#include <string>

#define Main_0114

#ifdef Main_0114

int main() {
	
	int age;
	std::cin >> age;

	if (age >= 1 && age <= 7)
	{
		std::cout << "����";
	}
	else if (age >= 8 && age <= 13)
	{
		std::cout << "�ʵ��л�";

	}else if (age >= 14 && age <= 16)
	{
		std::cout << "���л�";

	}else if (age >= 17 && age <= 19)
	{
		std::cout << "����л�";

	}else if (age >= 20)
	{
		std::cout << "����";

	}else
	{
		std::cout << "���δ� ";

	}
}

#endif // Main_0114
