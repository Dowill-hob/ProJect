#include <iostream>
#include <string>
#define Main10_0202
#ifdef Main10_0202

using namespace std;
// �Լ� ������ ����
//void print(int num) {
//	cout << "point func test!" << endl;
//	cout << "func value is : "  << num << endl;
//}
//
//int main() {
//	void (*fun_ptr)(int); //�Լ� ������ ����
//	fun_ptr = &print;
//	(*fun_ptr)(3);
//	return 0;
//}
// �ݹ� ���� ���
/*void myCallback(int result1) {
	cout << "�ݹ��Լ��� ��µ� ��� : " << result1 << endl;
}

void performOperation(int a, int b, void(*callback)(int)) {
	int sum = a + b;
	callback(sum);
}
int main() {
	int x = 5, y = 10;
	performOperation(x, y, myCallback);
	return 0;
}
*/
//void chage_lower(string result) {
//	cout << "��ȯ�� ���ڿ� : " << result << endl;
//}
//// ���ڿ� ���� ���ϴ� �Լ�
//void Perform(string str, void(*chage_lower)(string)) {
//	int i = 0;
//	while (str[i])
//	{
//		str[i] = tolower(str[i]);
//		i++;
//	}
//	chage_lower(str);
//}
//
//int main() {
//	string str1;
//	cout << "���ڿ��� �Է��ϼ��� : ";
//	getline(cin, str1);
//	Perform(str1, chage_lower);
//	return 0;
//}

//���� �ǽ� 10, Ŀ���� �Է��Լ� �����
/*void InputStr() {
	bool flag = true;
	char ch;
	int idx = 0;
	char input_str[100];
	cout << "���ڿ��� �Է��ϼ��� : ";
	while (flag)
	{
		ch = cin.get();
		if (ch == '\n')
		{
			break;
		}
		else
		{
			input_str[idx] = ch;
		}
		idx++;
	}
	cout << "�Է��� ���ڿ� : ";
	for (int i = 0; i < idx; i++)
	{
		cout << input_str[i];
	}
}
int main() {
	InputStr();
}
*/
void Callback_add(int num1, int num2) {
	int result = num1 + num2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}
void Callback_sub(int num1, int num2) {
	int result = num1 - num2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}
void Callback_mul(int num1, int num2) {
	int result = num1 * num2;
	cout << "���� ���" << endl;
	cout << "��� : " << result << endl;
}
void Callback_div(int num1, int num2) {
	if (num2 == 0) cout << "0���δ� ���� �� �����ϴ�.";
	else
	{

		float result = (float)num1 / num2;
		cout << "������ ���" << endl;
		cout << "��� : " << result << endl;
	}
}
void performOperation(int a, int b, void(*callback)(int, int)) {
	callback(a, b);
}

int main() {
	int num1, num2;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;
	performOperation(num1, num2, Callback_add);
	performOperation(num1, num2, Callback_sub);
	performOperation(num1, num2, Callback_mul);
	performOperation(num1, num2, Callback_div);
}
#endif // Main10_0202
