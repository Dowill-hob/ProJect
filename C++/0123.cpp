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


//void callByReference(int &a, int &b, int &c ) // �ּҰ��� �Ű�����
//{
//	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
//	cin >> a;
//	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
//	cin >> b;
//	cout << "���� ������ų Ƚ���� �Է��ϼ��� : ";
//	cin >> c;
//	cout << "�Էµ� �� : ù ��° ���� : " << a << ", �� ��° ���� : " << b << ", ���� Ƚ�� : " << c << "\n" << endl;
//
//}
//void inc_num(int &x,int &y, int &z) {
//	
//
//	for (int i = 0; i < z; i++)
//	{
//		cout << "���� " << i + 1 << "ȸ�� : " << endl;
//		x += 1;
//		y += 1;
//		cout << "���� �� : ù ��° ���� : " << x << ", �� ��° ���� :" << y << endl;
//		cout << "�� ������ �� : " << x + y << endl;
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
//	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
//	cin >> x;
//	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
//	cin >> y;
//	cout << "���� ������ų Ƚ���� �Է��ϼ��� : ";
//	cin >> z;
//	cout << "�Էµ� �� : ù ��° ���� : " << x << ", �� ��° ���� : " << y << ", ���� Ƚ�� : " << z << "\n" << endl;
//}
//void increase(int& x, int& y, int& z)
//{
//	for (int i = 0; i < z; i++)
//	{
//		cout << "���� " << i + 1 << " ȸ��" << endl;
//		x++;
//		y++;
//		int sum = x + y;
//		cout << "���� �� : ù ��° ���� : " << x << ", �� ��° ���� : " << y << endl;
//		cout << "�� ������ �� : " << sum << "\n" << endl;
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
//	//�迭 Ȯ��
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
//		cout << "�迭�� ũ�⸦" << capacity<<"�� �ʱ�ȭ �߽��ϴ�. \n" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//	void Curent_Array() {
//
//		cout << "���� �迭 : ";
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
//		cout << "��� " << value << "�� �迭�� �߰��߽��ϴ�." << endl;
//	}
//	void del_Array() {
//		if (size > 0) {
//			int remove_element = arr[--size];
//			cout << "�迭���� ������ ��� " << remove_element << "�� �����߽��ϴ�." << endl;
//		}
//		else {
//			cout << "�迭�� ��� �ֽ��ϴ�." << endl;
//		}
//	}
//	~Array() {
//		delete[] arr;
//		cout << "�迭 �޸𸮰� �����Ǿ����ϴ�." << endl;
//	}
//};
//int main() {
//	int capacity;
//	cout << "�ʱ� �迭 ũ�⸦ �Է��ϼ��� : ";
//	cin >> capacity;
//
//	Array arr(capacity);
//
//	cout << "1 : ���� �迭 ���" << endl;
//	cout << "2 : �迭�� ��� �߰�" << endl;
//	cout << "3 : �迭�� ������ ��� ����" << endl;
//	cout << "0 : ����" << endl;
//
//	int choice = 1;
//	while (choice > 0)
//	{
//		cout << "����� �Է� �ϼ��� : ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			arr.Curent_Array();
//			break;
//		case 2:
//			int value;
//			cout << "�߰��� ���� �Է��ϼ��� : ";
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
	// ���� ���ϱ�
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

	cout << "������ ���ڿ� : " << concat << endl;
}

int main() {
	const char* str = "hello";
	const char* str2 = "world";


	concat_string(str, str2);







	return 0;
}
#endif // Main9_0123
