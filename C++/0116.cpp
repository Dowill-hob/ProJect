//#include <iostream>
//#include <string>
//#define Main4_0116


#ifdef Main4_0116
using namespace std;
/*
int main() {
	std::string str;

	//std::cin >> str;

	getline(std::cin, str, 'b'); //b라는 문자전까지 입력을 받는다.

	std::cout << "문자열 : " << str << std::endl;



	return 0;
}

int main() {

	string str1 = " ";
	
	string str2 = "codingon";
	
	string str3("codingon");
	
	string str4(str2);

	char str_arr[] = { 'h','e','l','l','o',NULL}; // null값을 넣어서 끝을 지어줘야지만 컴퓨터가 인식 안하면 더미데이터 삽입

	string str5(str_arr);

	cout << "str 1 : " << str1 << endl; // 문자열 더하기는 +로 가능
	cout << "str 2 : " << str2 << endl; // 비교연산자 사용시 알파벳 순위로 값이 정해짐
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

	char str_arr[] = { 'h','e','l','l','o',NULL }; // null값을 넣어서 끝을 지어줘야지만 컴퓨터가 인식 안하면 더미데이터 삽입

	string str5(str_arr);

	cout << "at : " << str1.at(5) << endl; // 문자열 더하기는 +로 가능
	cout << "intdex : " << str1[5] << endl; // 비교연산자 사용시 알파벳 순위로 값이 정해짐
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
		cout << "문자열이 비있습니다." << endl;
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

		cout << "첫번째 문자열을 입력하시오 : ";
		cin >> str1;

		cout << "두번째 문자열을 입력하시오 : ";
		cin >> str2;


		bool is_str1_number = true;
		bool is_str2_number = true;
	
		for (int i = 0; i < str1.length(); i++) if (isdigit(str1[i]) == 0) is_str1_number = false;

		for (int i = 0; i < str2.length(); i++) if (isdigit(str2[i]) == 0) is_str2_number = false;

		if (is_str1_number == false || is_str2_number == false )
		{
			cout << str1<< " , "<< str2 << " is NO" << endl;
			cout << "숫자를 다시 입력하시오." << endl;
			cout << "두 문자열 이어 붙이기 : " << str1 + str2 << endl;
			cout << "두 숫자열 합 : str1과 str2과 모두 숫자가 아니기에 합칠수 없습니다." << endl;
			continue;
		}
		else cout << str1 << " is OK" << endl;
		cout << "두 문자열 이어 붙이기 : " << str1 + str2 << endl;
		int number_str1 = stoi(str1); 
		int number_str2 = stoi(str2);
		cout << "두 숫자열 합 : " << number_str1 + number_str2 << endl;
		cout << "0을 입력시 종료됩니다. 계속하시려면 1을 입력하시오.";
		cin >> str3;

	}

	string str = " ";
	string str2 = " ";
	bool flag = true;
	bool flag2 = true;
	while (flag || flag2)// 둘중 하나만 true여도 실행 둘다 false일경우 stop
	{
		cout << "문자열 1 입력 : ";
		cin >> str;
		cout << "문자열 2 입력 : ";
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
	// 첫 문자 소문자 변환
	str.replace(0, 1, string(1, tolower(str[0])));
	cout << "첫 알파벳 소문자 변환 : " << str << endl;
	
	// ding 반환
	string choice = str.substr(2, 4);
	cout << "선택 문자열 반환 : " << choice << endl;
	
	// coooooon 변경
	cout << "coooooon 변경 : " << str.replace(2, 4, "oooo") << endl;

	// con이 되도록 변경
	cout << "지우기 : " << str.erase(1, 5) << endl;




	
return 0;
}
*/

int main() {

	/*int arr_init[] = { 0, };

	int arr_int[] = { 1,2,3,4,5,6, };

	char arr_char[] = { 'a','b','c','d', };

	float arr_float[] = { 0.0, 0.1, 0.2, 0.3, };


	cout << "초깃값 없음 : " << arr_init[3] << endl;
	cout << "int 형 배열 : " << arr_int[3] << endl;
	cout << "char 형 배열 : " << arr_char[3] << endl;
	cout << "float형 배열 : " << arr_float[3] << endl;*/
	/*
	// 소수 출력
	int arr_int[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "소수 : " << endl;
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

	cout << "배열 크기 : " << sizeof(arr_i) << endl;
	cout << "원소 크기 : " << sizeof(arr_i[0]) << endl;
	int index = sizeof(arr_i) / sizeof(arr_i[0]);
	for (int i = 0; i < index  ; i++)
	{
		cout << "int형 배열" << i+1 << "번째에 입력할 값 : ";
		cin >> arr_i[i];
	}
	for (int j = index - 1; j >= 0 ;j--)
	{
		cout << "int형 배열 " << j + 1 << "번째에 요소 입력된 값 : ";
		cout << arr_i[j]<< endl;
	}
	cout << "끝";
	return 0;
	*/

	float grade[5] = { 0, };  //const int 로 입력하면 상수로 입력 가능
	int count = sizeof(grade) / sizeof(grade[0]);
	float sum = 0;
	float avg = 0.0;
	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		cin >> grade[i];
		cout << endl;
		sum += grade[i];
	}
	avg = sum / count;
	cout << "성적 평균 : " << avg << endl;
	
	return 0;
}
#endif //main4_0116