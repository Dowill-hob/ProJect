//#include <iostream>
//#include <string>
//#define Main4_0116


#ifdef Main4_0116
using namespace std;
/*
int main() {
	std::string str;

	//std::cin >> str;

	getline(std::cin, str, 'b'); //b��� ���������� �Է��� �޴´�.

	std::cout << "���ڿ� : " << str << std::endl;



	return 0;
}

int main() {

	string str1 = " ";
	
	string str2 = "codingon";
	
	string str3("codingon");
	
	string str4(str2);

	char str_arr[] = { 'h','e','l','l','o',NULL}; // null���� �־ ���� ����������� ��ǻ�Ͱ� �ν� ���ϸ� ���̵����� ����

	string str5(str_arr);

	cout << "str 1 : " << str1 << endl; // ���ڿ� ���ϱ�� +�� ����
	cout << "str 2 : " << str2 << endl; // �񱳿����� ���� ���ĺ� ������ ���� ������
	cout << "str 3 : " << str3 << endl;
	cout << "str 4 : " << str4 << endl;
	cout << "str 5 : " << str5 << endl;

	return 0;

}
int main() {

	string str1 = "helloworldcodingon";

	string str2 = "codingon";

	string str3("codingon");

	string str4(str2);

	char str_arr[] = { 'h','e','l','l','o',NULL }; // null���� �־ ���� ����������� ��ǻ�Ͱ� �ν� ���ϸ� ���̵����� ����

	string str5(str_arr);

	cout << "at : " << str1.at(5) << endl; // ���ڿ� ���ϱ�� +�� ����
	cout << "intdex : " << str1[5] << endl; // �񱳿����� ���� ���ĺ� ������ ���� ������
	cout << "front : " << str1.front() << endl;
	cout << "back : " << str1.back() << endl;
	cout << "length : " << str1.length() << endl;
	cout << "size : " << str1.size() << endl;
	str1.resize(5);
	cout << "resize : " << str1 << endl;

	cout << "enpty : " << str1.empty() << endl;
	str1.clear();
	cout << "clear : " << str1.empty() << endl;

	if (str1.empty())
	{
		cout << "���ڿ��� ���ֽ��ϴ�." << endl;
	}
	else
	{
		cout << str1 << endl;
	}
	return 0;
*/
/*
int main() {

	string  str = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	cout << str.size() << endl;
	cout << str.at(100) << endl;
	cout << str.find("two") << endl;
	cout << str.find("two", 14) << endl;
	
	string str1;
	string str2;
	int str3 = 1;
	while (str3 > 0)
	{

		cout << "ù��° ���ڿ��� �Է��Ͻÿ� : ";
		cin >> str1;

		cout << "�ι�° ���ڿ��� �Է��Ͻÿ� : ";
		cin >> str2;


		bool is_str1_number = true;
		bool is_str2_number = true;
	
		for (int i = 0; i < str1.length(); i++) if (isdigit(str1[i]) == 0) is_str1_number = false;

		for (int i = 0; i < str2.length(); i++) if (isdigit(str2[i]) == 0) is_str2_number = false;

		if (is_str1_number == false || is_str2_number == false )
		{
			cout << str1<< " , "<< str2 << " is NO" << endl;
			cout << "���ڸ� �ٽ� �Է��Ͻÿ�." << endl;
			cout << "�� ���ڿ� �̾� ���̱� : " << str1 + str2 << endl;
			cout << "�� ���ڿ� �� : str1�� str2�� ��� ���ڰ� �ƴϱ⿡ ��ĥ�� �����ϴ�." << endl;
			continue;
		}
		else cout << str1 << " is OK" << endl;
		cout << "�� ���ڿ� �̾� ���̱� : " << str1 + str2 << endl;
		int number_str1 = stoi(str1); 
		int number_str2 = stoi(str2);
		cout << "�� ���ڿ� �� : " << number_str1 + number_str2 << endl;
		cout << "0�� �Է½� ����˴ϴ�. ����Ͻ÷��� 1�� �Է��Ͻÿ�.";
		cin >> str3;

	}

	string str = " ";
	string str2 = " ";
	bool flag = true;
	bool flag2 = true;
	while (flag || flag2)// ���� �ϳ��� true���� ���� �Ѵ� false�ϰ�� stop
	{
		cout << "���ڿ� 1 �Է� : ";
		cin >> str;
		cout << "���ڿ� 2 �Է� : ";
		cin >> str2;
		int count = str.length();
		int index = 0;
		int index_2 = 0;
		while (index < count)
		{
			int val = isdigit(str[index]);
			if (val == 0)
			{
				cout << "str1 is NO" << endl;
				break;
			}
			else {
				index_2++;
			}
			index++;
		}
		if (index_2 == count)
		{
			cout << "str1 is OK" << endl;
			flag = false;
		}
		int count2 = str2.length();
		int index2 = 0;
		int index_22 = 0;
		while (index2 < count2)
		{
			int val2 = isdigit(str2[index2]);
			if (val2 == 0)
			{
				cout << "str2 is NO" << endl;
				break;
			}
			else {
				index_22++;
			}
			index2++;
		}
		if (index_22 == count2)
		{
			cout << "str2 is OK" << endl;
			flag2 = false;
		}
	}

	
	string str = "Codingon";
	// ù ���� �ҹ��� ��ȯ
	str.replace(0, 1, string(1, tolower(str[0])));
	cout << "ù ���ĺ� �ҹ��� ��ȯ : " << str << endl;
	
	// ding ��ȯ
	string choice = str.substr(2, 4);
	cout << "���� ���ڿ� ��ȯ : " << choice << endl;
	
	// coooooon ����
	cout << "coooooon ���� : " << str.replace(2, 4, "oooo") << endl;

	// con�� �ǵ��� ����
	cout << "����� : " << str.erase(1, 5) << endl;




	
return 0;
}
*/

int main() {

	/*int arr_init[] = { 0, };

	int arr_int[] = { 1,2,3,4,5,6, };

	char arr_char[] = { 'a','b','c','d', };

	float arr_float[] = { 0.0, 0.1, 0.2, 0.3, };


	cout << "�ʱ갪 ���� : " << arr_init[3] << endl;
	cout << "int �� �迭 : " << arr_int[3] << endl;
	cout << "char �� �迭 : " << arr_char[3] << endl;
	cout << "float�� �迭 : " << arr_float[3] << endl;*/
	/*
	// �Ҽ� ���
	int arr_int[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "�Ҽ� : " << endl;
	for (int i =0; i < 10; i++)
	{
		int num = arr_int[i];
		bool prime = true;	
		if (arr_int[i] <= 1 ) prime = false;
		else
		{
			for (int j = 2; j < num; j++)
			{
				if (num % j == 0) prime = false; break;
			}
		}
		if (prime)
		{
			cout << num << " "<<endl;
		}
	}

	int arr_i[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "�迭 ũ�� : " << sizeof(arr_i) << endl;
	cout << "���� ũ�� : " << sizeof(arr_i[0]) << endl;
	int index = sizeof(arr_i) / sizeof(arr_i[0]);
	for (int i = 0; i < index  ; i++)
	{
		cout << "int�� �迭" << i+1 << "��°�� �Է��� �� : ";
		cin >> arr_i[i];
	}
	for (int j = index - 1; j >= 0 ;j--)
	{
		cout << "int�� �迭 " << j + 1 << "��°�� ��� �Էµ� �� : ";
		cout << arr_i[j]<< endl;
	}
	cout << "��";
	return 0;
	*/

	float grade[5] = { 0, };  //const int �� �Է��ϸ� ����� �Է� ����
	int count = sizeof(grade) / sizeof(grade[0]);
	float sum = 0;
	float avg = 0.0;
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> grade[i];
		cout << endl;
		sum += grade[i];
	}
	avg = sum / count;
	cout << "���� ��� : " << avg << endl;
	
	return 0;
}
#endif //main4_0116