#include <iostream>
#include <string>
//#define Main7_0121
#ifdef Main7_0121
using namespace std;
//class Cat {
//private:
//	string name;
//	int age;
//
//public:
//	Cat(string _name, int _age)
//	{
//		this->name = _name;
//		this->age = _age;
//	}
//	string getName() {
//		return name;
//	}
//
//	int getAge() {
//		return age;
//	}
//
//	void setName(string _name) {
//		this->name = _name;
//
//	}
//	void setAge(int _age) {
//		this->age = _age;
//	}
//};
//
//
//int main() {
//
//	Cat cat1("은돌이" , 1);
//
//	string str_n = cat1.getName();
//	int int_n = cat1.getAge();
//
//	cout << "고양이 이름은 " << str_n << "입니다." << endl;
//	cout << "고양이 나이는 " << int_n << "입니다." << endl;
//
//	cat1.setName("나비");
//	cat1.setAge(3);
//
//	str_n = cat1.getName();
//	int_n = cat1.getAge();
//
//	cout << "고양이2 이름은 " << str_n << "입니다." << endl;
//	cout << "고양이2 나이는 " << int_n << "입니다." << endl;
//}


//class Rectangle {
//private:
//	int width;
//	int height;
//public:
//	Rectangle(int _width, int _height) {
//		this->width = _width;
//		this->height = _height;
//	}
//	void area() {
//		int res = width * height;
//		cout << "넓이는 : " << res << endl;
//	}
//	void setRect(){
//		cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
//		cin >> width >> height;
//	}
//	void getRect() {
//		cout << "가로 세로 길이는 : "<< width << " " << height << endl;
//	}
//};
//
//void main() {
//
//	Rectangle rect(1, 2);
//	rect.area();
//	rect.getRect();
//	rect.setRect();
//	rect.area();
//	rect.getRect();
//	
//	
//}

//class Car {
//private:
//	string name;
//	int door;
//	int wheel;
//	int horn;
//public:
//	void setData(string _n, int _d, int _w, int _h)
//	{
//		name = _n;
//		door = _d;
//		wheel = _w;
//		horn = _h;
//	}
//	void getName()
//	{
//		cout << "이 차에 이름은" << name << "입니다." << endl;
//	}
//	void getDoor()
//	{
//		cout << "자동차의 도어는 " << door << "개 입니다." << endl;
//	}
//	void getWheel()
//	{
//		cout << "자동차의 바퀴는 " << wheel << "개 입니다." << endl;
//	}
//	void getHorn()
//	{
//		cout << "이 차는 경적을 " << horn << " 초간 울립니다." << endl;
//	}
//
//};
//
//class Genesis : public Car {
//public:
//	void gen_option()
//	{
//		cout << "제네시스는 고급 인테리어를 장착했습니다.";
//	}
//};
//
//int main() {
//
//	Car c1;
//	c1.setData("붕붕", 4, 4, 10);
//	c1.getName();
//	c1.getDoor();
//	c1.getWheel();
//	c1.getHorn(); 
//	cout << endl;
//
//	Genesis gen1;
//	gen1.setData("제네시스", 2, 4, 20);
//	gen1.getName();
//	gen1.getDoor();
//	gen1.getWheel();
//	gen1.getHorn();
//	gen1.gen_option();
//	return 0;
//}

//class Animal {
//private:
//	int age = 0;
//	string name;
//public:
//	void setAnimal(int _age, string _name) {
//		age = _age;
//		name = _name;
//	}
//
//	void print_data() {
//		cout << "이름 : " << name << ", " << "나이 : " << age << endl;
//	}
//
//	void eat_food() {
//		cout << name << "이(가) 먹이를 먹습니다." << endl;
//	}
//
//	void move(string method) {
//		
//		cout << name << "은(는)" << method <<"로 이동합니다."<< endl;
//	}
//};
//
//class Cat : public Animal {
//private:
//	string movement;
//public:
//	Cat() {
//		cout << "고양이 정보 : " << endl;
//	}
//	void cat_move() {
//		movement = "두 발";
//		move(movement);
//	}
//};
//
//class Bird : public Animal {
//private:
//	string movement;
//public:
//	Bird(){
//		cout << "새 정보 : " << endl;
//	}
//	void bird_move() {
//		movement = " 두 날개";
//		move(movement);
//	}
//};
//
//int main() {
//	Cat cat1;
//	cat1.setAnimal(3, "나비");
//	cat1.print_data();
//	cat1.eat_food();
//	cat1.cat_move();
//	
//	cout << endl;
//
//	Bird bird1;
//	bird1.setAnimal(1, "참새");
//	bird1.print_data();
//	bird1.eat_food();
//	bird1.bird_move();
//}

//class Character {
//private:
//	string name;
//	int level = 0;
//	int item_num = 0;
//	int sel_num = 0;
//	int flag = 1;
//public:
//	Character() {
//		cout << "이름을 입력해주세요 : ";
//		cin >> name;
//		cout << name << " 캐릭터가 생성 되었습니다." << endl;
//	}
//	void change_name() {
//		cout << "새 이름을 입력해주세요 : ";
//		cin >> name;
//		cout << "이름이 변경되었습니다." << endl;
//		cout << "new name : " << name << endl;
//	}
//	void level_up() {
//		cout << "level up!" << endl;
//		level += 1;
//		cout << "현재 레벨 : " << level << endl;
//	}
//	void item_pick() {
//		cout << "아이템을 얻었습니다." << endl;
//		item_num += 1;
//		cout << "현재 아이템 개수 : " << item_num << endl;
//	}
//	void item_use() {
//		cout << "아이템을 사용했습니다!" << endl;
//		item_num -= 1;
//		cout << "현재 아이템 개수 : " << item_num << endl;
//	}
//	void user_info() {
//		cout << "이름 : " << name << endl;
//		cout << "레벨 : " << level << endl;
//		cout << "현재 아이템 개수 : " << item_num << endl;
//	}
//	void select() {
//		while(flag){
//			cout << "어떤 동작을 실행하시겠습니까? (0: 종료) ";
//			cin >> sel_num;		
//			switch (sel_num)
//			{
//			case 0:
//				flag = 0;
//				break;
//			case 1:
//				change_name();
//				break;
//			case 2:
//				level_up();
//				break;
//			case 3:
//				item_pick();
//				break;
//			case 4:
//				item_use();
//				break;
//			case 5:
//				user_info();
//				break;
//			default:
//				break;
//			}
//		}
//
//	}
//};

//void main() {
//	int coin = 1;
//	Character user1;
//	user1.select();
	/*while (coin > 0)
	{
		cout << "어떤 동작을 실행하시겠습니까? (0: 종료) ";
		cin >> coin;
		switch (coin)
		{
		case 1:
			user1.setName();
			break;
		case 2:
			user1.level_up();
			break;
		case 3:
			user1.item_pick();
			break;
		case 4:
			user1.item_use();
			break;
		case 5:
			user1.user_info();
			break;
		default:
			break;
		}
	}*/
//}
// namespace
//namespace test1 {
//	void print() {
//		cout << "네임스페이스 테스트 1 입니다." << endl;
//	}
//}
//namespace test2 {
//	void print() {
//		cout << "네임스체이스 테스트 2 입니다." << endl;
//	}
//	void print3() {
//		cout << "네임스체이스 테스트 3 입니다." << endl;
//	}
//}
//using test2::print3;
//int main() {
//
//	print3();
//	
//}
// 실습 26
namespace seoul {
	int local_num = 02;
	string landmark = "경북궁";
	
}
namespace busan {
	int local_num = 051;
	string landmark = "해운대";

}
using namespace busan;
int main() {

	cout << "서울 지역번호 : " << seoul::local_num << endl;
	cout << "서울 랜드 마크 : " << seoul::landmark << endl;
	cout << endl;
	cout << "부산 지역번호 : " << local_num << endl;
	cout << "부산 랜드마크 : " << landmark << endl;

	return 0;
}
#endif // Main7_0121
