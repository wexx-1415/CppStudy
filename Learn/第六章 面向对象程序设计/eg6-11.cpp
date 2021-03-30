#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	void set_point(int x1, int y1);
	int get_x();
	int get_y();
};
void Point::set_point(int x1, int y1) {
	x = x1;
	y = y1;
}
int Point::get_x() {
	return x;
}
int Point::get_y() {
	return y;
}
int main() {
	Point t;
	Point* p;
	p = &t;
	t.set_point(20, 50);
	cout << "点x的坐标为：" << p->get_x() << endl;
	cout << "点y的坐标为：" << p->get_y() << endl;

	return 0;
}
