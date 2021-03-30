#include<iostream>
using namespace std;
class Sum {
private:
	int num;
public:
	Sum();
	void print();
	~Sum();
};
Sum::Sum() {
	num = 15;
	cout << "调用默认的构造函数,num=" << num << endl;
}
Sum::~Sum() {
	cout << "析构函数被调用" << endl;
}
void Sum::print() {
	cout << "调用一般成员函数" << endl;
}
int main() {
	Sum s;
	s.print();

	return 0;
}
