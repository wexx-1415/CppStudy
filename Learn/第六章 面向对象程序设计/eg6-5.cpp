#include<iostream>
using namespace std;
class Sum {
private:
	int num;
public:
	Sum();
	Sum(int a, int b);
	void print();
};
Sum::Sum() {
	num = 15;
	cout << "调用默认的构造函数，num=" << num << endl;
}
Sum::Sum(int a,int b) {
	num = a + b;
	cout << "调用带参数构造函数计算a+b=" << num << endl;
}
void Sum::print() {
	cout << "调用一般成员函数" << endl;
}
int main() {
	Sum s;
	Sum();
	Sum(3, 5);
	s.print();

	return 0;
}
