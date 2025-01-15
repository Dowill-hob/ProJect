#include <iostream>
#include <string>
#define Main3_0115

#ifdef Main3_0115
/*
int main() {


	int val = 0;
	int until = 10;
	int result = 0;
	std::cout << "1~9단 출력" << std::endl;
	for (val = 1; val < until ; val++ )
	{
		std::cout << "-----" << val << "단-----" << std::endl;
		for (int i = 1; i < until; i++)
		{
			result = val * i;
			std::cout << val << " X " << i << " = " << result << std::endl;

		}
		
	}

	
	return 0;

}

int main() {

	int number = 0;
	int sum = 0;
	std::cout << "1 부터 n까지의 합 구하기.\n" << std::endl;

	std::cout << "숫자(양의 정수)를 입력하세요 : ";
	std::cin >> number;

	for (int i = 0; i <= number; i++)
	{
		sum = sum + i; // sum += i

	}

	std::cout << "1 부터 " << number << "까지의 합은 : " << sum << std::endl;
	
	
	return 0;

}
int main() {

	int i = 0; // 초깃값

	while (i < 10 )
	{
		
		std::cout << "Itcration" << i << std::endl;
		i++;


	}

	return 0;
}

int main() {

	int num = 0;
	int sum = 0;
	int val = 0;
	std::cout << "사용자가 입력한 숫자 더하기\n" << std::endl;
	
	
	while (true) // true 말고 0보다 작다라고 하는 변수를 넣으면 얻을 수 있다.
	{	
		std::cout << "숫자를 입력하세요 (0 : exit) : ";
		std::cin >> num;
		if (num == 0) break;
		sum += num;

	}

	std::cout << "사용자가 입력한 수의 합은 : " << sum << std::endl;
	return 0;
}
*/

int main() {

	int input = 0;
	std::string star;
	std::string blank;
	//std::cout << "피라미드의 높이를 설정하시오 : ";
	//std::cin >> input;
	//
	//for (int i = 1; i <= input; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		star += "*";
	//	}
	//	std::cout << star << std::endl;
	//	star = "";
	//}
	/*
	while (i <= input)
	{
		star = "";
		blank = "";

		int j = 0;
		while (j < input-i)
		{
			blank += " ";
			j++;
		}
		
		int t = 0;
		while (t < (2*i-1))
		{
			star += "*";
			t++;
		}
		std::cout << blank << star << std::endl;
		i++;
	}
	*/
	std::cout << "피라미드의 높이를 설정하시오 : ";
	std::cin >> input;

	for (int i = 1; i <= input; i++)
	{
		star = "";
		blank = "";

		for (int j = 0; j < (input - i) ; j++ )
		{
			blank += " ";
		}
		for (int t = 0;t < (2*i-1); t++)
		{
			star += "*";
		}

		std::cout << blank << star << std::endl;
		
	}
	return 0;

}
#endif // Main3_0115
