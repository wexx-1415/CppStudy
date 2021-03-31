#include<iostream>
using namespace std;
class Test {
private:
	int x;
public:
	void set_x(int x);
	int get_x();
};
void Test::set_x(int x) {
	this->x = x;
}
int Test::get_x() {
	return this->x;
}
int main() {
	Test t;
	t.set_x(100);
	cout << t.get_x() << endl;

	return 0;
}
