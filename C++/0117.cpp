#include <iostream>
#include <string>
#define Main5_0117
#ifdef Main5_0117
using namespace std;

//int main() {

	//int exam[5][3] = { {} };


	/*for (int i = 0; i < 5; i++)
	{
		cout << i+1 << "�� �л��� ����, ���� ���� ������ : ";

		for (int j = 0; j < 1; j++)
		{
			
			getline(cin, exam[i][j]);
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "�� �л��� ����, ���� ���� ������ : ";

		for (int j = 0; j < 1; j++)
		{
			cout << exam[i][j];
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			switch (j)
			{
			case 0:
				cout << i + 1 << "�� �л��� ���� ������ : ";
				cin >> exam[i][j];
				break;
			case 1:
				cout << i + 1 << "�� �л��� ���� ������ : ";
				cin >> exam[i][j];
				break;
			case 2:
				cout << i + 1 << "�� �л��� ���� ������ : ";
				cin >> exam[i][j];
				break;
			default:
				break;
			}
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "�� �л��� ����, ���� ���� ������ : ";

		for (int j = 0; j < 3; j++)
		{
			cout << exam[i][j] << " ";
		}
		cout << endl;
	}*/
	/*int exam[5][3] = {};
	string str = " ";

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° �л��� ����, ����, ���� ������ (�Է�) : ";
		
		getline(cin, str);

		int val = str.find(" ");
		string tmp = str.substr(0, val);

		int val2 = str.find(" ", val +1);
		
		string tmp2 = str.substr(val+1,val2-val );

		string tmp3 = str.substr(val2 + 1);

		exam[i][0] = stoi(tmp);
		exam[i][1] = stoi(tmp2);
		exam[i][2] = stoi(tmp3);


	}
	cout << "-------------------------------------------------------" << endl;

	for (int j = 0; j < 5; j++)
	{
		cout << j + 1 << "��° �л��� ����, ����, ���� ������ (���) : " << exam[j][0] << " " << exam[j][1] << " " << exam[j][2] << endl;
	}
	
	return 0;*/
//}

//struct Car
//{
//	string name;
//	int age[10];
//	int door;
//	float engine_temp;
//};
//
//struct Rectangle
//{
//	float width;
//	float height;
//};
//
//int main() {
//
//	float area;
//	Rectangle rectangle;
//	
//	cout << "����, ���� ���̸� �Է��ϼ���. : ";
//	cin >> rectangle.width;
//	cin >> rectangle.height;
//	area = rectangle.width * rectangle.height;
//	cout << "���̴� : " << area;
//
//	// Car c1 = {"Sonata",2014,99.9};
//	/*Car c1, c2, c3, c4;
//	c1.name = "Sonata";
//	c1.age[0] = 2014;
//	c1.age[1] = 2016;
//	c1.door = 4;
//	c1.engine_temp = 99.9;
//
//	cout << c1.name << endl;
//	cout << c1.age[0] << endl;
//	cout << c1.age[1] << endl;
//	cout << c1.door << endl;
//	cout << c1.engine_temp << endl;*/
//
//
//	return 0;
//}

struct Student
{
	string name;
	float scores[3];
};

int main() {
	int count = 1;
	Student stu1, stu2, stu3;
	while (count <=3)
	{
		cout << count << "�� �л��� �̸��� �Է��ϼ��� : ";
		switch (count)
		{
		case  1:
			cin >> stu1.name;
			cout << stu1.name << "�� 3���� ������ �Է��ϼ���. : ";
			cin >> stu1.scores[0];
			cin >> stu1.scores[1];
			cin >> stu1.scores[2];
			break;
		case 2:
			cin >> stu2.name;
			cout << stu2.name << "�� 3���� ������ �Է��ϼ���. : ";
			cin >> stu2.scores[0];
			cin >> stu2.scores[1];
			cin >> stu2.scores[2];
			break;
		default:
			cin >> stu3.name;
			cout << stu3.name << "�� 3���� ������ �Է��ϼ���. : ";
			cin >> stu3.scores[0];
			cin >> stu3.scores[1];
			cin >> stu3.scores[2];
			break;
		}
		count += 1;
	}
	float stu1_avg = (stu1.scores[0] + stu1.scores[1] + stu1.scores[2]) / 3;
	float stu2_avg = (stu2.scores[0] + stu2.scores[1] + stu2.scores[2]) / 3;
	float stu3_avg = (stu3.scores[0] + stu3.scores[1] + stu3.scores[2]) / 3;
	cout << stu1.name << "�� ��� ���� : " << stu1_avg << endl;
	cout << stu2.name << "�� ��� ���� : " << stu2_avg << endl;
	cout << stu3.name << "�� ��� ���� : " << stu3_avg << endl;

	if (stu1_avg == stu2_avg && stu1_avg == stu3_avg)
	{
		cout << "�л� ������ ����� �����ϴ�." << endl;
	}
	else if (stu1_avg > stu2_avg && stu1_avg > stu3_avg)
	{
		cout << "1�� : " << stu1.name << " (������� : " << stu1_avg << ")" << endl;
	}
	else if (stu2_avg > stu1_avg && stu2_avg > stu3_avg)
	{
		cout << "1�� : " << stu2.name << " (������� : " << stu2_avg << ")" << endl;
	}
	else if (stu3_avg > stu2_avg && stu3_avg > stu1_avg)
	{
		cout << "1�� : " << stu3.name << " (������� : " << stu3_avg << ")" << endl;
	}


	return 0;
}

#endif // Main5_0117
