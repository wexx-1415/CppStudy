#include<iostream>
using namespace std;
class Count {
private:
	int x;
	friend void set_x(Count&, int);
public:
	Count() {
		x = 0;
	}
	void print() {
		cout << x << endl;
	}
};
void set_x(Count& c, int a) {
	c.x = a;
}
int main() {
	Count counter;
	cout << "私有数据成员的初始值：counter.x=";
	counter.print();
	cout << "通过友元函数set_x()改变私有成员数值：counter.x=";
	set_x(counter, 8);
	counter.print();

	return 0;
}
