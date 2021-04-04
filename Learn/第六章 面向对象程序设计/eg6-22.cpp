#include<iostream>
using namespace std;
class Temployee {
protected:
	int ID;
	char* Name;
public:
	void regist(int id, char* name);
	void display();
};
void Temployee::regist(int id, char* name) {
	ID = id;
	Name = name;
}
void Temployee::display() {
	cout << " 编号 " << " 姓名 " << endl;
	cout << ID << " " << Name << endl;
}
class Tmanager :protected Temployee {
private:
	float Accum;
	char* Grade;
public:
	void set_pay(int id, char* name, char* grade, float monthpay);
	void display();
};
void Tmanager::set_pay(int id, char* name, char* grade, float monthpay) {
	regist(id, name);
	Grade = grade;
	Accum = monthpay;
}
void Tmanager::display() {
	cout << " 编号 " << " 姓名 " << " 职务 " << " 工资 " << endl;
	cout << ID << " " << Name << " " << Grade << " " << Accum << endl;
}
class Tsale :protected Temployee {
private:
	char* Grade;
	double commrate;
	double sales;
	float Accum;
public:
	void set_pay(int id, char* name, char* grade, double commrate, double sales);
	void display();
};
void Tsale::set_pay(int id, char* name, char* grade, double commrate, double sales) {
	regist(id, name);
	Grade = grade;
	this->commrate = commrate;
	this->sales = sales;
	Accum = commrate * sales;
}
void Tsale::display() {
	cout << " 编号 " << " 姓名 " << " 职务 " << " 销售提成" << " 销售额 " << " 工资 " << endl;
	cout << ID << " " << Name << " " << Grade << " " << commrate << " " << sales << " " << Accum << endl;
}
int main() {
	Temployee epy1;
	Temployee epy2;
	epy1.regist(1001, "张大山");
	epy2.regist(1002, "李明全");
	epy1.display();
	epy2.display();
	Tmanager mana1;
	mana1.set_pay(1001, "张大山", "经理", 8000);
	mana1.display();
	Tsale sale1;
	sale1.set_pay(1002, "李明全", "销售员", 0.20, 30000);
	sale1.display();

	return 0;
}
