#include<iostream>
using namespace std;
class Point {
	double x, y;
public:
	Point() {}
	Point(double a, double b) {
		x = a;
		y = b;
	}
	virtual double area() {
		return 0.0;
	}
};
const double PI = 3.141593;
class Circle :public Point {
private:
	double Radius;
public:
	Circle(double r) {
		Radius = r;
	}
	virtual double area() {
		return PI * Radius * Radius;
	}
};
int main() {
	Point* p;
	Circle c(5.43);
	p = &c;
	cout << "圆面积为：" << (*p).area() << endl;

	return 0;
}
