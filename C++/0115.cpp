#include <iostream>
#include <string>
#define Main3_0115

#ifdef Main3_0115
/*
int main() {


	int val = 0;
	int until = 10;
	int result = 0;
	std::cout << "1~9�� ���" << std::endl;
	for (val = 1; val < until ; val++ )
	{
		std::cout << "-----" << val << "��-----" << std::endl;
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
	std::cout << "1 ���� n������ �� ���ϱ�.\n" << std::endl;

	std::cout << "����(���� ����)�� �Է��ϼ��� : ";
	std::cin >> number;

	for (int i = 0; i <= number; i++)
	{
		sum = sum + i; // sum += i

	}

	std::cout << "1 ���� " << number << "������ ���� : " << sum << std::endl;
	
	
	return 0;

}
int main() {

	int i = 0; // �ʱ갪

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
	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n" << std::endl;
	
	
	while (true) // true ���� 0���� �۴ٶ�� �ϴ� ������ ������ ���� �� �ִ�.
	{	
		std::cout << "���ڸ� �Է��ϼ��� (0 : exit) : ";
		std::cin >> num;
		if (num == 0) break;
		sum += num;

	}

	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;
	return 0;
}
*/

int main() {

	int input = 0;
	std::string star;
	std::string blank;
	//std::cout << "�Ƕ�̵��� ���̸� �����Ͻÿ� : ";
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
	std::cout << "�Ƕ�̵��� ���̸� �����Ͻÿ� : ";
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
