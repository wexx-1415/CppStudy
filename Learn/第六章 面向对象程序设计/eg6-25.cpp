#include<iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point(){}
	Point(int i, int j) {
		x = i, y = j;
	}
	Point operator +(Point& p) {
		return Point(x + p.x, y + p.y);
	}
	void disp() {
		cout << "(" << x << ',' << y << ")" << endl;
	}
};
int main() {
	Point p1(3, 4), p2(2, 9);
	Point p3;
	p3 = p1 + p2;
	p3.disp();

	return 0;
}
