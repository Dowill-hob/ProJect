#include <iostream>
#include <string>
#define Main10_0202
#ifdef Main10_0202

using namespace std;
// 함수 포인터 선언
//void print(int num) {
//	cout << "point func test!" << endl;
//	cout << "func value is : "  << num << endl;
//}
//
//int main() {
//	void (*fun_ptr)(int); //함수 포인터 선언
//	fun_ptr = &print;
//	(*fun_ptr)(3);
//	return 0;
//}
// 콜백 선언 사용
/*void myCallback(int result1) {
	cout << "콜백함수로 출력된 결과 : " << result1 << endl;
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
//	cout << "변환된 문자열 : " << result << endl;
//}
//// 문자열 길이 구하는 함수
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
//	cout << "문자열을 입력하세요 : ";
//	getline(cin, str1);
//	Perform(str1, chage_lower);
//	return 0;
//}

//종합 실습 10, 커스텀 입력함수 만들기
/*void InputStr() {
	bool flag = true;
	char ch;
	int idx = 0;
	char input_str[100];
	cout << "문자열을 입력하세요 : ";
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
	cout << "입력한 문자열 : ";
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
	cout << "덧셈 계산" << endl;
	cout << "결과 : " << result << endl;
}
void Callback_sub(int num1, int num2) {
	int result = num1 - num2;
	cout << "뺄셈 계산" << endl;
	cout << "결과 : " << result << endl;
}
void Callback_mul(int num1, int num2) {
	int result = num1 * num2;
	cout << "곱셈 계산" << endl;
	cout << "결과 : " << result << endl;
}
void Callback_div(int num1, int num2) {
	if (num2 == 0) cout << "0으로는 나눌 수 없습니다.";
	else
	{

		float result = (float)num1 / num2;
		cout << "나눗셈 계산" << endl;
		cout << "결과 : " << result << endl;
	}
}
void performOperation(int a, int b, void(*callback)(int, int)) {
	callback(a, b);
}

int main() {
	int num1, num2;
	cout << "두 수를 입력하세요 : ";
	cin >> num1 >> num2;
	performOperation(num1, num2, Callback_add);
	performOperation(num1, num2, Callback_sub);
	performOperation(num1, num2, Callback_mul);
	performOperation(num1, num2, Callback_div);
}
#endif // Main10_0202
