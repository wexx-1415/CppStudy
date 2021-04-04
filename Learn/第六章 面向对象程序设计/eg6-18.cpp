#include<iostream>
using namespace std;
class Rectangle {
	int width, height;
public:
	Rectangle(){
		width = height = 0;
	cout << "构造矩形对象" << endl;
	}
	~Rectangle(){
		cout << "销毁矩形对象" << width << "和" << height << endl;
	}
	void set(int w, int h) {
		width = w;
		height = h;
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle* p;
	p = new Rectangle[3];
	p[0].set(1, 2);
	p[1].set(3, 4);
	p[2].set(5, 6);
	for (int i = 0; i < 3; i++)
		cout << "Area is:" << p[i].area() << endl;
	delete[]p;

	return 0;
}
