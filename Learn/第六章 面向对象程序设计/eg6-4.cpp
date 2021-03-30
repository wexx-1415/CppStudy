#include<iostream>
using namespace std;
#define PI 3.14
class Circle {
private:
	double radius;
public:
	Circle();
};
Circle::Circle() {
	radius = 8;
	cout << "构造函数被自动调用" << endl;
	cout << "圆的半径r=8" << endl;
	double s = PI * radius * radius;
	cout << "圆的面积：" << s << endl;
}
int main() {
	Circle cir;
}
