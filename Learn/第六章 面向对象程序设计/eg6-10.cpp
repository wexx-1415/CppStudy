#include<iostream>
using namespace std;
#define PI 3.14
class Circle {
private:
	double radius;
public:
	double setRadius(int r);
};
double Circle::setRadius(int r) {
	radius = r;
	cout << "经参数传递，圆的半径设为：" << radius << endl;
	return PI * radius * radius;
}
int main() {
	Circle cir, * p;
	p = &cir;
	int r = 8;
	double s = p->setRadius(8);
	cout << "圆的面积为：" << s << endl;

	return 0;
}
