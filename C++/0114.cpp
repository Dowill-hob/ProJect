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

int main() {
	int val = 0;
	bool flage = false; // if(flag)�������� ���ٹ����� ����� Ȯ�ο�
	std::cout << "������ �Է��ϼ��� : ";
	std::cin >> val;
	switch (val/10)
	{
		case 10:
			std::cout << "������ A �Դϴ�." << std::endl;
			break;
		case 9:
			if (val==90)
			{
				std::cout << "������ B �Դϴ�." << std::endl;
			}
			else
			{
				std::cout << "������ A �Դϴ�." << std::endl;
			}
			break;
		case 8:
		case 7:
			if (val <76)
			{
				std::cout << "������ C �Դϴ�." << std::endl;
				break;
			}
			std::cout << "������ B �Դϴ�." << std::endl;
			break;
		case 6:
		case 5:
			if (val == 50)
			{
				std::cout << "������ D �Դϴ�." << std::endl;
				break;
			}
			std::cout << "������ C �Դϴ�." << std::endl;
			break;
		case 4:
		case 3:
			if (val < 35)
			{
				std::cout << "������ F �Դϴ�." << std::endl;
				break;
			}
			
			std::cout << "������ D �Դϴ�." << std::endl;
			break;

		default:
			std::cout << "������ F �Դϴ�." << std::endl;
			break;
	}
	return 0;
}


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
	//int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // �� ���� �� ��
	//std::cout << "������ ��� �����ΰ���? (0000�������� �Է��� ��) " << std::endl;
	//std::cin >> date;
	//std::cout << "������ ��� �����ΰ���? (0000�������� �Է��� ��) " << std::endl;
	//std::cin >> birth_day;

	//// ���� ���� �и�
	//int current_month = date / 100; // ���� ���̱⿡ �Ҽ��� ���ϴ� �Ұ�
	//int current_day = date % 100;
	//int birth_month = birth_day / 100;
	//int birth_day_only = birth_day % 100;

	//// ��¥ ���̸� ���
	//int day_difference = 0;

	//// ���� ���̸� ������ ���
	//if (current_month == birth_month) {
	//	day_difference = abs(current_day - birth_day_only);
	//}
	//else if (current_month > birth_month) { // ���� ��¥�� ���� ����
	//	// ���� ���� ���� �ϼ� + �߰� ���� �ϼ� + ���� ���� ��� �ϼ�
	//	day_difference = days_in_month[birth_month - 1] - birth_day_only;
	//	for (int i = birth_month; i < current_month - 1; i++) {
	//		day_difference += days_in_month[i];
	//	}
	//	day_difference += current_day;
	//}
	//else { // ������ ���� ��¥ ����
	//	// ���� ���� ���� �ϼ� + �߰� ���� �ϼ� + ���� ���� ��� �ϼ�
	//	day_difference = days_in_month[current_month - 1] - current_day;
	//	for (int i = current_month; i < birth_month - 1; i++) {
	//		day_difference += days_in_month[i];
	//	}
	//	day_difference += birth_day_only;
	//}

	//std::cout << "��¥ ���̴� " << day_difference << "���Դϴ�." << std::endl;


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
