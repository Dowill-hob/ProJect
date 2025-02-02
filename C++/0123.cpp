#include <iostream>
#include <string>

//#define Main9_0123
#ifdef Main9_0123
using namespace std;
//int callByVal(int a, int b)
//{
//	a = 10;
//	b = 20;
//	cout << "CALL BY VALUE : ";
//	cout << a << " " << b << endl;
//
//	return a;
//}
//void callByRef(int* a, int* b)
//{
//	*a = 10;
//	*b = 20;
//	cout << "CALL BY REFERENCE : ";
//	cout << *a << " " << *b << endl;
//}
//int main(void) {
//	int x = 5;
//	int y = 3;
//	int* px = &x;
//	int* py = &y;
//	int res = callByVal(x, y);
//	callByRef(px, py);
//	
//	cout << res << endl;
//	cout << x << " " << y << endl;


//void callByReference(int &a, int &b, int &c ) // 주소값이 매개변수
//{
//	cout << "첫 번째 숫자를 입력하세요 : ";
//	cin >> a;
//	cout << "두 번째 숫자를 입력하세요 : ";
//	cin >> b;
//	cout << "값을 증가시킬 횟수를 입력하세요 : ";
//	cin >> c;
//	cout << "입력된 값 : 첫 번째 숫자 : " << a << ", 두 번째 숫자 : " << b << ", 증가 횟수 : " << c << "\n" << endl;
//
//}
//void inc_num(int &x,int &y, int &z) {
//	
//
//	for (int i = 0; i < z; i++)
//	{
//		cout << "증가 " << i + 1 << "회차 : " << endl;
//		x += 1;
//		y += 1;
//		cout << "현재 값 : 첫 번째 숫자 : " << x << ", 두 번째 숫자 :" << y << endl;
//		cout << "두 숫자의 합 : " << x + y << endl;
//		cout << endl;
//	}
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int count = 0;
//	callByReference(num1, num2, count);
//	inc_num(num1,num2,count);
//
//
//}

//void input(int& x, int& y, int& z) 
//{
//	cout << "첫 번째 숫자를 입력하세요 : ";
//	cin >> x;
//	cout << "두 번째 숫자를 입력하세요 : ";
//	cin >> y;
//	cout << "값을 증가실킬 횟수를 입력하세요 : ";
//	cin >> z;
//	cout << "입력된 값 : 첫 번째 숫자 : " << x << ", 두 번째 숫자 : " << y << ", 증가 횟수 : " << z << "\n" << endl;
//}
//void increase(int& x, int& y, int& z)
//{
//	for (int i = 0; i < z; i++)
//	{
//		cout << "증가 " << i + 1 << " 회차" << endl;
//		x++;
//		y++;
//		int sum = x + y;
//		cout << "현재 값 : 첫 번째 숫자 : " << x << ", 두 번째 숫자 : " << y << endl;
//		cout << "두 숫자의 합 : " << sum << "\n" << endl;
//	}
//}
//
//int main() {
//	
//	int x, y, z;
//	input(x, y, z);
//	increase(x, y, z);
//}
using namespace std;
//class Array {
//private:
//	int* arr;
//	int size;
//	int capacity;
//	//배열 확장
//	void Expand_Array() {
//		capacity *= 2;
//		int* new_arr = new int[capacity];
//		for (int i = 0; i < size; i++)
//		{
//			new_arr[i] = arr[i]; 
//		}
//		delete[] arr;
//		arr = new_arr;
//		
//	}
//public:
//	Array(int _capacity) {
//		
//		capacity = _capacity;
//		size = capacity;
//		arr = new int[capacity];
//		cout << "배열의 크기를" << capacity<<"로 초기화 했습니다. \n" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//	void Curent_Array() {
//
//		cout << "현재 배열 : ";
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	void Add_Array(int value) {
//		if (size == capacity)
//		{
//			Expand_Array();
//		}
//		arr[size++] = value;
//		cout << "요소 " << value << "를 배열에 추가했습니다." << endl;
//	}
//	void del_Array() {
//		if (size > 0) {
//			int remove_element = arr[--size];
//			cout << "배열에서 마지막 요소 " << remove_element << "를 삭제했습니다." << endl;
//		}
//		else {
//			cout << "배열이 비어 있습니다." << endl;
//		}
//	}
//	~Array() {
//		delete[] arr;
//		cout << "배열 메모리가 해제되었습니다." << endl;
//	}
//};
//int main() {
//	int capacity;
//	cout << "초기 배열 크기를 입력하세요 : ";
//	cin >> capacity;
//
//	Array arr(capacity);
//
//	cout << "1 : 현재 배열 출력" << endl;
//	cout << "2 : 배열에 요소 추가" << endl;
//	cout << "3 : 배열의 마지막 요소 삭제" << endl;
//	cout << "0 : 종료" << endl;
//
//	int choice = 1;
//	while (choice > 0)
//	{
//		cout << "명령을 입력 하세요 : ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			arr.Curent_Array();
//			break;
//		case 2:
//			int value;
//			cout << "추가할 값을 입력하세요 : ";
//			cin >> value;
//			arr.Add_Array(value);
//			break;
//		case 3:
//			arr.del_Array();
//			break;
//		case 0:
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

void concat_string(const char* str1, const char* str2) {

	int len1 = 0;
	int len2 = 0;
	// 길이 구하기
	while (str1[len1] != NULL)
	{
		len1++;
	}
	while (str2[len2] != NULL) {
		len2++;
	}
	char* concat = new char[len1 + len2 + 1 ];

	for (int i = 0; i < len1; i++)
	{
		concat[i] = str1[i];
	}
	for (int j = 0; j < len2; j++)
	{
		concat[len1 + j] = str2[j];
	}

	concat[len1 + len2] = NULL;

	cout << "합쳐진 문자열 : " << concat << endl;
}

int main() {
	const char* str = "hello";
	const char* str2 = "world";


	concat_string(str, str2);







	return 0;
}
#endif // Main9_0123
