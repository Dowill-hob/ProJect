#include <iostream>
#include <string>

#define Main_0114

#ifdef Main_0114

int main() {
	
	int age;
	std::cin >> age;

	if (age >= 1 && age <= 7)
	{
		std::cout << "유아";
	}
	else if (age >= 8 && age <= 13)
	{
		std::cout << "초등학생";

	}else if (age >= 14 && age <= 16)
	{
		std::cout << "중학생";

	}else if (age >= 17 && age <= 19)
	{
		std::cout << "고등학생";

	}else if (age >= 20)
	{
		std::cout << "성인";

	}else
	{
		std::cout << "나인는 ";

	}
}

#endif // Main_0114
