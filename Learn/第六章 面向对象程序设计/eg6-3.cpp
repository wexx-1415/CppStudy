#include<iostream>
using namespace std;
#define PI 3.14159
class Circle {
private:
	double radius;
public:
	void setRadius(double r);
	double cirArea();
};
void Circle::setRadius(double r) {
	radius = r;
}
double Circle::cirArea() {
	double area = 0;
	area = PI * radius * radius;
	return area;
}
int main() {
	double s, r = 3;
	Circle cir;
	cir.setRadius(r);
	s = cir.cirArea();
	cout << s << endl;

	return 0;
}
