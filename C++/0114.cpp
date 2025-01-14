#include <iostream>
#include <string>

#define Main_0114

#ifdef Main_0114
/*
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

int main() {
	std::string name;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;

	if (name == "홍길동")
	{
		std::cout << "남자";
	}
	else if (name == "성춘향")
	{
		std::cout << "여자";
	}
	else
	{
		std::cout << "모르겠습니다.";
	}

	std::cout << "입니다." << std::endl;

	return 0;
}

int main() {
	int val = 0;
	bool flage = false; // if(flag)형식으로 한줄문으로 디버그 확인용
	std::cout << "점수를 입력하세요 : ";
	std::cin >> val;
	switch (val/10)
	{
		case 10:
			std::cout << "학점은 A 입니다." << std::endl;
			break;
		case 9:
			if (val==90)
			{
				std::cout << "학점은 B 입니다." << std::endl;
			}
			else
			{
				std::cout << "학점은 A 입니다." << std::endl;
			}
			break;
		case 8:
		case 7:
			if (val <76)
			{
				std::cout << "학점은 C 입니다." << std::endl;
				break;
			}
			std::cout << "학점은 B 입니다." << std::endl;
			break;
		case 6:
		case 5:
			if (val == 50)
			{
				std::cout << "학점은 D 입니다." << std::endl;
				break;
			}
			std::cout << "학점은 C 입니다." << std::endl;
			break;
		case 4:
		case 3:
			if (val < 35)
			{
				std::cout << "학점은 F 입니다." << std::endl;
				break;
			}
			
			std::cout << "학점은 D 입니다." << std::endl;
			break;

		default:
			std::cout << "학점은 F 입니다." << std::endl;
			break;
	}
	return 0;
}


int main() {
	
	int val;
	std::cout << "숫자를 입력 하시오 : ";
	std::cin >> val;

	val % 5 == 0 ? std::cout << val << "는 5의 배수입니다." : std::cout << val << "는 5의 배수가 아닙니다.";

	return 0;
	//std::cout << "내가 받은 학점을 입력하시오." << std::endl;
	//std::cin >> score;

	//score == 'F' ? std::cout << "재수강" : std::cout << "Pass";


}
*/

int main() {
	
	//int date;
	//int birth_day;
	//int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // 각 월의 일 수
	//std::cout << "오늘은 몇월 몇일인가요? (0000형식으로 입력할 것) " << std::endl;
	//std::cin >> date;
	//std::cout << "생일은 몇월 몇일인가요? (0000형식으로 입력할 것) " << std::endl;
	//std::cin >> birth_day;

	//// 월과 일을 분리
	//int current_month = date / 100; // 정수 형이기에 소수점 이하는 소거
	//int current_day = date % 100;
	//int birth_month = birth_day / 100;
	//int birth_day_only = birth_day % 100;

	//// 날짜 차이를 계산
	//int day_difference = 0;

	//// 같은 달이면 간단히 계산
	//if (current_month == birth_month) {
	//	day_difference = abs(current_day - birth_day_only);
	//}
	//else if (current_month > birth_month) { // 현재 날짜가 생일 이후
	//	// 생일 달의 남은 일수 + 중간 달의 일수 + 현재 달의 경과 일수
	//	day_difference = days_in_month[birth_month - 1] - birth_day_only;
	//	for (int i = birth_month; i < current_month - 1; i++) {
	//		day_difference += days_in_month[i];
	//	}
	//	day_difference += current_day;
	//}
	//else { // 생일이 현재 날짜 이후
	//	// 현재 달의 남은 일수 + 중간 달의 일수 + 생일 달의 경과 일수
	//	day_difference = days_in_month[current_month - 1] - current_day;
	//	for (int i = current_month; i < birth_month - 1; i++) {
	//		day_difference += days_in_month[i];
	//	}
	//	day_difference += birth_day_only;
	//}

	//std::cout << "날짜 차이는 " << day_difference << "일입니다." << std::endl;


	int num1;
	std::cout << "첫 번째 변수를 입력하시오 : ";
	std::cin >> num1;
	int num2;
	std::cout << "두 번째 변수를 입력하시오 : ";
	std::cin >> num2;

	char operat;
	std::cout << "원하는 연산자를 선택하시오. (+,/,*,-,%)";
	std::cin >> operat;

	int result;

	switch (operat)
	{
	case '+':
		result = num1 + num2;
		std::cout << "두수의 합 : " << result << std::endl;
		break;

	case '/':
		if (num1 >= num2)
		{
			result = num1 / num2;
			std::cout << "큰 수에서 작은 수를 나눔 : " << result << std::endl;
			break;
		}
		else if(num2 >= num1)
		{
			result = num2 / num1;
			std::cout << "큰 수에서 작은 수를 나눔 : " << result << std::endl;
			break;
		}
		else
		{
			std::cout << "나눌수 없는 수가 포함되어 있습니다." << std::endl;
			break;
		}

	case '*':
		result = num1 * num2;
		std::cout << "두수의 곱 : " << result << std::endl;
		break;

	case '-':
		result = num1 - num2;
		std::cout << "두수의 차 : " << result << std::endl;
		break;

	case '%':
		result = num1 % num2;
		std::cout << "두수의 나머지 : " << result << std::endl;
		break;

	default:
		std::cout << "지원하지 않는 연산자 입니다." << std::endl;
		break;
	}


	return 0;
}

#endif // Main_0114
