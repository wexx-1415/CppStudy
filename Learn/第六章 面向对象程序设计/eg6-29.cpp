#include<iostream>
using namespace std;
class figure {
public:
	virtual float area() = 0;
};
const double PI = 3.141593;
class circle :public figure {
private:
	float radius;
public:
	circle(float r) { radius = r; }
	float area() {
		return PI * radius * radius;
	}
};
class triangle :public figure {
protected:
	float high, wide;
public:
	triangle(float h, float w) {
		high = h;
		wide = w;
	}
	float area() {
		return high * wide * 0.5;
	}
};
class rectangle :public triangle {
public:
	rectangle(float h, float w) :triangle(h, w) {}
	float area() {
		return high * wide;
	}
};
float total(figure* p[], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i]->area();
	return sum;
}
int main() {
	figure* pr[3];
	triangle pr0(3.0, 4.0);
	rectangle pr1(2.0, 3.5);
	circle pr2(10.0);
	pr[0] = &pr0;
	pr[1] = &pr1;
	pr[2] = &pr2;
	cout << "总面积为：" << total(pr, 3) << endl;

	return 0;
}
