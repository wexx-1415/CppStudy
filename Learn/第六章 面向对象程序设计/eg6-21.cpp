#include<iostream>
using namespace std;
class A {
private:
	int x;
public:
	void set_x(int s) {
		x = s;
	}
	int get_x() {
		return x;
	}
};
class B:public A {
public:
	void print();
};
void B::print() {
	cout << get_x() << endl;
}
int main() {
	B b;
	b.set_x(10);
	b.print();

	return 0;
}
