#include <iostream>
#include <string>
#define Main6_0118
#ifdef Main6_0118

using namespace std;
//int sensor_cal(int sensor_val, int offset) {
//	
//	int cal_val = 0;
//	cal_val = sensor_val - offset;
//
//	return cal_val;
//}
//void mortor_speed(int mortor_num, int speed) {
//	
//	cout << mortor_num << "�� ���͸� " << speed << "�� �ӵ��� �۵�" << endl;
//
//}
//void main() {
//	
//	int mortor_arr[] = { 1,2,4, };
//	int speed_ = 100;
//
//	mortor_speed(mortor_arr[0], speed_);
//	mortor_speed(mortor_arr[1], 70);
//	mortor_speed(mortor_arr[2], 50);
//
//	int sensor_val1 = 100;
//	int sensor_val2 = 30;
//	int offset = 5;
//	int cal_vel = 0;
//
//	cal_vel = sensor_cal(sensor_val1, offset);
//	cout << "������ ���� �� : " << cal_vel << endl;
//
//	cal_vel = sensor_cal(sensor_val2, offset);
//	cout << "������ ���� �� : " << cal_vel << endl;
//	
//}

//void even_or_odd(int num) {
//
//	string result;
//	if (num % 2 == 0)
//	{
//		result = "¦��";
//	}
//	else
//	{
//		result = "Ȧ��";
//	}
//	cout << num << " �� " << result << " �Դϴ�." << endl;
//}
//
//int max_in_3number(int num1, int num2, int num3)
//{
//	int max_number = num1 > num2 ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2 : num3;
//	return max_number;
//}
//
//int main() {
//	int num = 0;
//	cout << "even or odd : ";
//	cin >> num;
//	even_or_odd(num);
//
//	int num1=0, num2=0, num3 = 0;
//	cout << "���� 3���� �Է��Ͻÿ� : ";
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	cout << num1 << " " << num2 << " " << num3 << " �� ���� ū���� : " << max_in_3number(num1, num2, num3) << endl;
//	
//	return 0;
//}
//using namespace std;
//struct Student
//{
//	std::string name;
//	float scores[3];
//};
//using namespace std;
//int main() {
//	int count = 1;
//	Student students[3];
//	string stu_name ="";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << i + 1 << " �� �л��� �̸��� �Է��ϼ��� : ";
//		cin >> students[i].name;
//		cout << students[i].name<< " �л��� 3���� ������ �Է��ϼ��� : ";
//		cin >> students[i].scores[0] >> students[i].scores[1] >> students[i].scores[2];
//	}
//	float first_avg = 0;
//	float stu1_avg = (students[0].scores[0] + students[0].scores[1] + students[0].scores[2]) / 3;
//	float stu2_avg = (students[1].scores[0] + students[1].scores[1] + students[1].scores[2]) / 3;
//	float stu3_avg = (students[2].scores[0] + students[2].scores[1] + students[2].scores[2]) / 3;
//	cout << students[0].name << "�� ��� ���� : " << stu1_avg << endl;
//	cout << students[1].name << "�� ��� ���� : " << stu2_avg << endl;
//	cout << students[2].name << "�� ��� ���� : " << stu3_avg << endl;
//
//	if (stu1_avg == stu2_avg && stu1_avg == stu3_avg)
//	{
//		cout << "�л� ������ ����� �����ϴ�." << endl;
//	}
//
//	first_avg = stu1_avg > stu2_avg ? (stu1_avg > stu3_avg) ? stu1_avg : stu3_avg : (stu2_avg > stu3_avg) ? stu2_avg : stu3_avg;
//	stu_name = stu1_avg > stu2_avg ? (stu1_avg > stu3_avg) ? students[0].name : students[2].name : (stu2_avg > stu3_avg) ? students[1].name : students[2].name;
//
//	cout << "1�� : " << stu_name << " (������� : " << first_avg << ")" << endl;
//	return 0;
//}
/*
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int sub(int num1, int num2) {

	int dif = num1 >= num2 ? (num1 - num2) : (num2 - num1);
	return dif;
}

int mul(int num1, int num2)
{
	int mul = num1 * num2;
	return mul;
}

float divide(int num1, int num2) {

	float div = (float)num1 / num2; // ���� ����ȯ (float), _static_float
	return div;
}

int main() {

	int num1, num2;
	cout << "������ ������ �� ������ �Է��� �ּ��� : ";
	cin >> num1 >> num2;

	cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
	if (num1 >= num2)
	{
		cout << num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
	}
	else
	{
		cout << num2 << " - " << num1 << " = " << sub(num1, num2) << endl;
	}
	cout << num1 << " * " << num2 << " = " << mul(num1, num2) << endl;
	cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
	return 0;
}
*/

//class CalClass
//{
//	private:
//		int val;
//	public:
//		void set_val(int num)
//		{
//			val = num;
//		}
//		void inc_val(int num);
//		void dec_val(int num)
//		{
//			val = val - num;
//		}
//		void print_val() {
//			cout << "���� ��� �� : " << val << endl;
//		}
//};
//
//
//void CalClass::inc_val(int num)
//{
//	val = val + num;
//}
//
//void main() {
//	
//	CalClass cc1, cc2;
//
//	cc1.set_val(3);
//	cc1.inc_val(3);
//	cc1.print_val();
//
//	cc1.dec_val(2);
//	cc1.print_val();
//	
//}

//class CalClass {
//
//private:
//	float val;
//	int num1, num2;
//	char calc;
//
//public:
//	void set_val() {
//		cout << "����1, ������(+ - * /), ���� 2�� �Է��ϼ��� : ";
//	}
//	void cal_val(int num1, int num2, char calc)
//	{
//		switch (calc)
//		{
//		case '+':
//			val = num1 + num2;
//			break;
//		case '-':
//			val = num1 - num2;
//			break;
//		case '*':
//			val = num1* num2;
//			break;
//		case '/':
//			val = (float)num1 / num2;
//			break;
//		default:
//			break;
//		}
//	}
//	void out_val(int num1, int num2, char calc) {
//		cout << num1 << " " << calc << " " << num2 << " = " << val << endl;
//	}
//};
//
//void main() {
//	int num1, num2;
//	char calc;
//	
//	CalClass cc1, cc2, cc3;
//	cc1.set_val();
//	cin >> num1 >> calc >> num2;
//	cc1.cal_val(num1 , num2 , calc);
//
//	cc1.out_val(num1, num2, calc);
//
//	cc2.set_val();
//	cin >> num1 >> calc >> num2;
//	cc2.cal_val(num1, num2, calc);
//
//	cc2.out_val(num1, num2, calc);
//
//	cc3.set_val();
//	cin >> num1 >> calc >> num2;
//	cc3.cal_val(num1, num2, calc);
//
//	cc3.out_val(num1, num2, calc);
//
//}

//class NumArray {
//private:
//public:
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	NumArray() {
//		cout << "�� �� �� !" << endl;
//		for (int i = 0; i < 10; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	~NumArray()
//	{	
//		cout << "�� �� �� !" << endl;
//		for (int i = 9; i >= 0; i--)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//};
//void main() {
//
//	NumArray NA;
//
//	return;
//}

class Make {
private:
	int price;
	int count;
	string sub;
public:
	Make() {
		cout << "�ؾ ����� ���� !" << endl;
	}
	void set_sub() {
		cout << "� ���� ���� ���? : " << endl;
	}
	void set_price() {
		cout << "�� ���� ������ �󸶷� �ұ��? : " << endl;
	}
	void set_count() {
		cout << "�� ���� ������? : " << endl;
	}
	void info_make(string sub, int price, int count) {
		cout << "�ؾ ���� : " << endl;
		cout << "����� : " << sub << endl;
		cout << "�� �� : " << count << endl;
		cout << "�� ���� : " << count * price << endl;
	}
	~Make() {
		cout << "�ؾ ����� ��!" << endl;
	}
};

void main() {
	int price;
	int count;
	string sub; 
	Make mk;
	mk.set_sub();
	cin >> sub;
	
	mk.set_price();
	cin >> price;
	
	mk.set_count();
	cin >> count;

	mk.info_make(sub, price, count);

}

#endif

