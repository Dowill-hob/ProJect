//#include <iostream>
//#include <string>

// #define Main_0114

#ifdef Main_0114
/*
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

int main() {
	std::string name;
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> name;

	if (name == "ȫ�浿")
	{
		std::cout << "����";
	}
	else if (name == "������")
	{
		std::cout << "����";
	}
	else
	{
		std::cout << "�𸣰ڽ��ϴ�.";
	}

	std::cout << "�Դϴ�." << std::endl;

	return 0;
}
*/
int main() {
	int val = 0;
	char grade;
	bool flage = false; // if(flag)�������� ���ٹ����� ����� Ȯ�ο�
	std::cout << "������ �Է��ϼ��� : ";
	std::cin >> val;
	if (val>=91 && val <= 100 )
	{
		grade = 'A';
	}
	else if (val >= 76 && val <= 90)
	{
		grade = 'B';
	}
	else if (val >= 51 && val <= 75)
	{
		grade = 'C';
	}
	else if (val >= 35 && val <= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	switch (grade)
	{
	case 'A':
		std::cout << "������ A �Դϴ�." << std::endl;
		break;
	case 'B':
		std::cout << "������ B �Դϴ�." << std::endl;
		break;
	case 'C':
		std::cout << "������ C �Դϴ�." << std::endl;
		break;
	case 'D':
		std::cout << "������ D �Դϴ�." << std::endl;
		break;
	default:
		std::cout << "������ F �Դϴ�." << std::endl;
		break;
	}
	return 0;
}

/*
int main() {
	
	int val;
	std::cout << "���ڸ� �Է� �Ͻÿ� : ";
	std::cin >> val;

	val % 5 == 0 ? std::cout << val << "�� 5�� ����Դϴ�." : std::cout << val << "�� 5�� ����� �ƴմϴ�.";

	return 0;
	//std::cout << "���� ���� ������ �Է��Ͻÿ�." << std::endl;
	//std::cin >> score;

	//score == 'F' ? std::cout << "�����" : std::cout << "Pass";


}
*/

int main() {
	
	//int date;
	//int birth_day;

	//std::cout << "������ ��� �����ΰ���? (0000�������� �Է��� ��) " << std::endl;
	//std::cin >> date;
	//std::cout << "������ ��� �����ΰ���? (0000�������� �Է��� ��) " << std::endl;
	//std::cin >> birth_day;

	//if (date == birth_day)
	//{
	//	std::cout << "���� �����մϴ�!!" << std::endl;
	//}
	//else if (date > birth_day)
	//{
	//	std::cout << "���� ��¥�� ���� ���� �ռ� �ֽ��ϴ�." << std::endl;
	//}
	//else
	//{
	//	std::cout << "������ �������ϴ�." << std::endl;
	//}
	//


	int num1;
	std::cout << "ù ��° ������ �Է��Ͻÿ� : ";
	std::cin >> num1;
	int num2;
	std::cout << "�� ��° ������ �Է��Ͻÿ� : ";
	std::cin >> num2;

	char operat;
	std::cout << "���ϴ� �����ڸ� �����Ͻÿ�. (+,/,*,-,%)";
	std::cin >> operat;

	int result;

	switch (operat)
	{
	case '+':
		result = num1 + num2;
		std::cout << "�μ��� �� : " << result << std::endl;
		break;

	case '/':
		if (num1 >= num2)
		{
			result = num1 / num2;
			std::cout << "ū ������ ���� ���� ���� : " << result << std::endl;
			break;
		}
		else if(num2 >= num1)
		{
			result = num2 / num1;
			std::cout << "ū ������ ���� ���� ���� : " << result << std::endl;
			break;
		}
		else
		{
			std::cout << "������ ���� ���� ���ԵǾ� �ֽ��ϴ�." << std::endl;
			break;
		}

	case '*':
		result = num1 * num2;
		std::cout << "�μ��� �� : " << result << std::endl;
		break;

	case '-':
		result = num1 - num2;
		std::cout << "�μ��� �� : " << result << std::endl;
		break;

	case '%':
		result = num1 % num2;
		std::cout << "�μ��� ������ : " << result << std::endl;
		break;

	default:
		std::cout << "�������� �ʴ� ������ �Դϴ�." << std::endl;
		break;
	}


	return 0;
}

#endif // Main_0114
