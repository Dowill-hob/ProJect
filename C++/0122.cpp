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
//	cout << "�ʱⰪ" << endl;
//	cout << "charVal : " << charVal << endl;
//	cout << "intVal : " << intVal << endl;
//	cout << "floatVal : " << floatVal << endl;
//
//	modifyChar(&charVal, true);
//	modifyInt(&intVal, true);
//	modifyFloat(&floatVal, true);
//
//	cout << "char  ���� �� : " << charVal << endl;
//	cout << "int   ���� �� : " << intVal << endl;
//	cout << "float ���� �� : " << floatVal << endl;
//
//	modifyChar(&charVal, false);
//	modifyInt(&intVal, false);
//	modifyFloat(&floatVal, false);
//
//	cout << "char  ���� �� : " << charVal << endl;
//	cout << "int   ���� �� : " << intVal << endl;
//	cout << "float ���� �� : " << floatVal << endl;
//	/*int val1 = 5;
//	int val2 = 5;
//
//	//�����ϰ��� �ϴ� �ڷ����� ���� ����
//	
//	int* p_v1 = &val1; // val�� �ּҰ��� p_v�� �Ҵ�
//	int* p_v2= &val2; // val�� �ּҰ��� p_v�� �Ҵ�
//
//	std::cout << "���� ��     : " << val1 << std::endl;
//	std::cout << "������ ��   : " << p_v1 << std::endl;
//	std::cout << "������ �� * : " << *p_v1 << std::endl; //p_v�޸𸮿� ����Ǿ��ִ� ���� �����ϰڴ�.
//
//	(*p_v1)++; //�� ���´� ���������� (�켱������ �־����⿡), ��ȣ�� ������� �����Ⱚ�� �����.
//
//	std::cout << "���� ��     :  " << val2 << std::endl;
//	std::cout << "������ ��   :  " << p_v2 << std::endl;
//	std::cout << "������ �� * :  " << *p_v2 << std::endl;
//	*/
//	
//	
//	return 0;
//
//}

//int main() {
//	int num;
//	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
//	cin >> num;
//
//	int* arr = new int[num];
//	cout << "5���� ���� �Է��ϼ���." << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << i + 1 << "��° �� : ";
//		cin >> arr[i];
//	}
//	cout << "�Էµ� �迭�� �� : ";
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
//	cout << "�迭 ũ�⸦ ���� �ϼ���" << endl;
//	cin >> val;
//	// **p �� ��밡�� �̶��� *p�� �ּҰ��� �����ö� ���
//	int** arr2 = new int* [val];
//	// ���� �迭 ���� & �Ҵ�
//	for (int i = 0; i < val; i++) {
//		
//		arr2[i] = new int[val];
//	}
//
//	for (int j = 0; j < val; j++)
//	{
//		for (int t = 0; t < val; t++)
//		{
//			arr2[j][t] = 1; // ����  �迭 ���
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
//	// ���� �迭 ����(�ݳ�)
//	for (int i = 0; i < val; i++)
//	{
//		delete[] arr2[i];
//	}
//	delete[] arr2;
//}
//int main() {
//	int x, y, count;
//	count = 1;
//	cout << "x�� �Է��ϼ��� : ";
//	cin >> x;
//	cout << "y�� �Է��ϼ��� : ";
//	cin >> y;
//
//	while (x <= 0 || y <= 0)
//	{
//		cout << "x�� y��� ����� �Է����ּ���." << endl;
//		cout << "x�� �Է��ϼ��� : ";
//		cin >> x;
//		cout << "y�� �Է��ϼ��� : ";
//		cin >> y;
//	}
//	// �� ����
//	int** arr2 = new int* [x];
//
//	// �� ����
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
//	// �� ����
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
	cout << "����Ʈ p�� ����Ű�� �� : " << p << endl;
	cout << "num �� ��              : " << num << endl;

	*p += 50;
	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "num �� ��              : " << num << endl;

	(*p)++;
	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "num �� ��              : " << *p << endl;

	int n1 = 10;
	int n2 = 20;

	int* p1 = &n1;
	int* p2 = &n2;

	cout << "�ּ� �� ���� : " << *p1 + *p2 << endl;
	cout << "�ּ� �� ���� : " << num << endl;


	*p++;
	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "num �� ��              : " << *p << endl;

	return 0;
}
#endif // Main_0122
