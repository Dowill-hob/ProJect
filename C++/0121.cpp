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
//	Cat cat1("������" , 1);
//
//	string str_n = cat1.getName();
//	int int_n = cat1.getAge();
//
//	cout << "����� �̸��� " << str_n << "�Դϴ�." << endl;
//	cout << "����� ���̴� " << int_n << "�Դϴ�." << endl;
//
//	cat1.setName("����");
//	cat1.setAge(3);
//
//	str_n = cat1.getName();
//	int_n = cat1.getAge();
//
//	cout << "�����2 �̸��� " << str_n << "�Դϴ�." << endl;
//	cout << "�����2 ���̴� " << int_n << "�Դϴ�." << endl;
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
//		cout << "���̴� : " << res << endl;
//	}
//	void setRect(){
//		cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) ";
//		cin >> width >> height;
//	}
//	void getRect() {
//		cout << "���� ���� ���̴� : "<< width << " " << height << endl;
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
//		cout << "�� ���� �̸���" << name << "�Դϴ�." << endl;
//	}
//	void getDoor()
//	{
//		cout << "�ڵ����� ����� " << door << "�� �Դϴ�." << endl;
//	}
//	void getWheel()
//	{
//		cout << "�ڵ����� ������ " << wheel << "�� �Դϴ�." << endl;
//	}
//	void getHorn()
//	{
//		cout << "�� ���� ������ " << horn << " �ʰ� �︳�ϴ�." << endl;
//	}
//
//};
//
//class Genesis : public Car {
//public:
//	void gen_option()
//	{
//		cout << "���׽ý��� ��� ���׸�� �����߽��ϴ�.";
//	}
//};
//
//int main() {
//
//	Car c1;
//	c1.setData("�غ�", 4, 4, 10);
//	c1.getName();
//	c1.getDoor();
//	c1.getWheel();
//	c1.getHorn(); 
//	cout << endl;
//
//	Genesis gen1;
//	gen1.setData("���׽ý�", 2, 4, 20);
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
//		cout << "�̸� : " << name << ", " << "���� : " << age << endl;
//	}
//
//	void eat_food() {
//		cout << name << "��(��) ���̸� �Խ��ϴ�." << endl;
//	}
//
//	void move(string method) {
//		
//		cout << name << "��(��)" << method <<"�� �̵��մϴ�."<< endl;
//	}
//};
//
//class Cat : public Animal {
//private:
//	string movement;
//public:
//	Cat() {
//		cout << "����� ���� : " << endl;
//	}
//	void cat_move() {
//		movement = "�� ��";
//		move(movement);
//	}
//};
//
//class Bird : public Animal {
//private:
//	string movement;
//public:
//	Bird(){
//		cout << "�� ���� : " << endl;
//	}
//	void bird_move() {
//		movement = " �� ����";
//		move(movement);
//	}
//};
//
//int main() {
//	Cat cat1;
//	cat1.setAnimal(3, "����");
//	cat1.print_data();
//	cat1.eat_food();
//	cat1.cat_move();
//	
//	cout << endl;
//
//	Bird bird1;
//	bird1.setAnimal(1, "����");
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
//		cout << "�̸��� �Է����ּ��� : ";
//		cin >> name;
//		cout << name << " ĳ���Ͱ� ���� �Ǿ����ϴ�." << endl;
//	}
//	void change_name() {
//		cout << "�� �̸��� �Է����ּ��� : ";
//		cin >> name;
//		cout << "�̸��� ����Ǿ����ϴ�." << endl;
//		cout << "new name : " << name << endl;
//	}
//	void level_up() {
//		cout << "level up!" << endl;
//		level += 1;
//		cout << "���� ���� : " << level << endl;
//	}
//	void item_pick() {
//		cout << "�������� ������ϴ�." << endl;
//		item_num += 1;
//		cout << "���� ������ ���� : " << item_num << endl;
//	}
//	void item_use() {
//		cout << "�������� ����߽��ϴ�!" << endl;
//		item_num -= 1;
//		cout << "���� ������ ���� : " << item_num << endl;
//	}
//	void user_info() {
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << level << endl;
//		cout << "���� ������ ���� : " << item_num << endl;
//	}
//	void select() {
//		while(flag){
//			cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) ";
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
		cout << "� ������ �����Ͻðڽ��ϱ�? (0: ����) ";
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
//		cout << "���ӽ����̽� �׽�Ʈ 1 �Դϴ�." << endl;
//	}
//}
//namespace test2 {
//	void print() {
//		cout << "���ӽ�ü�̽� �׽�Ʈ 2 �Դϴ�." << endl;
//	}
//	void print3() {
//		cout << "���ӽ�ü�̽� �׽�Ʈ 3 �Դϴ�." << endl;
//	}
//}
//using test2::print3;
//int main() {
//
//	print3();
//	
//}
// �ǽ� 26
namespace seoul {
	int local_num = 02;
	string landmark = "��ϱ�";
	
}
namespace busan {
	int local_num = 051;
	string landmark = "�ؿ��";

}
using namespace busan;
int main() {

	cout << "���� ������ȣ : " << seoul::local_num << endl;
	cout << "���� ���� ��ũ : " << seoul::landmark << endl;
	cout << endl;
	cout << "�λ� ������ȣ : " << local_num << endl;
	cout << "�λ� ���帶ũ : " << landmark << endl;

	return 0;
}
#endif // Main7_0121
