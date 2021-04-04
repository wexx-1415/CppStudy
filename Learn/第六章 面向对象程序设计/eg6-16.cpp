#include<iostream>
using namespace std;
class Rectangle {
	int width, height;
public:
	Rectangle(int w, int h) {
		width = w;
		height = h;
		cout << "构造宽" << width << "高" << height << "的矩形" << endl;
	}
	~Rectangle() {
		cout << "销毁矩形对象" << endl;
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle* p;
	p = new Rectangle(4, 5);
	cout << "矩形面积：" << p->area() << endl;
	delete p;

	return 0;
}
