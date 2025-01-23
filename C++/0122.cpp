//#include <iostream>
//#include <string>

//#define Main8_0122
#ifdef Main8_0122

using namespace std;
void modifyChar(char* c, bool increment) {
	increment ? (*c)++ : (*c)--;
}

void modifyInt(int* i, bool increment)
{
	increment ? (*i)++ : (*i)--;
}

void modifyFloat(float* f, bool increment) {
	increment ? (*f)++ : (*f)--;
}

//int main() {
//	
//	char charVal = 'A';
//	int intVal = 10;
//	float floatVal = 5.5;
//
//	cout << "초기값" << endl;
//	cout << "charVal : " << charVal << endl;
//	cout << "intVal : " << intVal << endl;
//	cout << "floatVal : " << floatVal << endl;
//
//	modifyChar(&charVal, true);
//	modifyInt(&intVal, true);
//	modifyFloat(&floatVal, true);
//
//	cout << "char  증가 후 : " << charVal << endl;
//	cout << "int   증가 후 : " << intVal << endl;
//	cout << "float 증가 후 : " << floatVal << endl;
//
//	modifyChar(&charVal, false);
//	modifyInt(&intVal, false);
//	modifyFloat(&floatVal, false);
//
//	cout << "char  감소 후 : " << charVal << endl;
//	cout << "int   감소 후 : " << intVal << endl;
//	cout << "float 감소 후 : " << floatVal << endl;
//	/*int val1 = 5;
//	int val2 = 5;
//
//	//참고하고자 하는 자료형과 같이 선언
//	
//	int* p_v1 = &val1; // val의 주소값을 p_v에 할당
//	int* p_v2= &val2; // val의 주소값을 p_v에 할당
//
//	std::cout << "변수 값     : " << val1 << std::endl;
//	std::cout << "포인터 값   : " << p_v1 << std::endl;
//	std::cout << "포인터 값 * : " << *p_v1 << std::endl; //p_v메모리에 저장되어있는 값에 접근하겠다.
//
//	(*p_v1)++; //이 형태는 가능하지만 (우선순위가 주어졌기에), 괄호가 없을경우 쓰레기값이 생긴다.
//
//	std::cout << "변수 값     :  " << val2 << std::endl;
//	std::cout << "포인터 값   :  " << p_v2 << std::endl;
//	std::cout << "포인터 값 * :  " << *p_v2 << std::endl;
//	*/
//	
//	
//	return 0;
//
//}

//int main() {
//	int num;
//	cout << "배열의 크기를 입력하세요 : ";
//	cin >> num;
//
//	int* arr = new int[num];
//	cout << "5개의 값을 입력하세요." << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << i + 1 << "번째 값 : ";
//		cin >> arr[i];
//	}
//	cout << "입력된 배열의 값 : ";
//	for (int j = 0; j < num; j++)
//	{
//		cout << arr[j] << " ";
//	}
//	cout << endl;
//
//	delete[] arr;
//}

//int main() {
//
//	int s_arr[2][3] = {};
//
//	int val;
//	cout << "배열 크기를 설정 하세요" << endl;
//	cin >> val;
//	// **p 도 사용가능 이때는 *p의 주소값을 가져올때 사용
//	int** arr2 = new int* [val];
//	// 동적 배열 선언 & 할당
//	for (int i = 0; i < val; i++) {
//		
//		arr2[i] = new int[val];
//	}
//
//	for (int j = 0; j < val; j++)
//	{
//		for (int t = 0; t < val; t++)
//		{
//			arr2[j][t] = 1; // 동적  배열 사용
//		}
//	}
//
//	for (int j = 0; j < val; j++)
//	{
//		for (int t = 0; t < val; t++)
//		{
//			cout << arr2[j][t]<< " ";
//		}
//	}
//	// 동적 배열 해제(반남)
//	for (int i = 0; i < val; i++)
//	{
//		delete[] arr2[i];
//	}
//	delete[] arr2;
//}
//int main() {
//	int x, y, count;
//	count = 1;
//	cout << "x를 입력하세요 : ";
//	cin >> x;
//	cout << "y를 입력하세요 : ";
//	cin >> y;
//
//	while (x <= 0 || y <= 0)
//	{
//		cout << "x와 y모두 양수를 입력해주세요." << endl;
//		cout << "x를 입력하세요 : ";
//		cin >> x;
//		cout << "y를 입력하세요 : ";
//		cin >> y;
//	}
//	// 행 선언
//	int** arr2 = new int* [x];
//
//	// 열 선언
//	for (int i = 0; i < x; i++)
//	{
//		arr2[i] = new int[y];
//	}
//	
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			arr2[i][j] = count;
//			count++;
//		}
//	}
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	// 열 해제
//	for (int i = 0; i < x; i++)
//	{
//		delete[] arr2[i];
//	}
//	delete[] arr2;
//	
//	return 0;
//}

int main() {

	int num = 100;

	int* p = NULL;

	p = &num;
	cout << "포인트 p가 가리키는 값 : " << p << endl;
	cout << "num 의 값              : " << num << endl;

	*p += 50;
	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "num 의 값              : " << num << endl;

	(*p)++;
	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "num 의 값              : " << *p << endl;

	int n1 = 10;
	int n2 = 20;

	int* p1 = &n1;
	int* p2 = &n2;

	cout << "주소 값 연산 : " << *p1 + *p2 << endl;
	cout << "주소 값 연산 : " << num << endl;


	*p++;
	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "num 의 값              : " << *p << endl;

	return 0;
}
#endif // Main_0122
