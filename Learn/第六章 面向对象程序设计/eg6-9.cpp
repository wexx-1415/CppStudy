#include<iostream>
using namespace std;
class TPoint {
private:
	int x, y;
public:
	TPoint(int a, int b) {
		x = a; y = b;
	}
	TPoint(TPoint& p);
	~TPoint() {
		cout << "析构函数被调用。\n";
	}
	int Xcoord() { return x; }
	int Ycoord() { return y; }
};
TPoint::TPoint(TPoint& p) {
	x = 2 * p.x;
	y = 2 * p.y;
	cout << "复制构造函数被调用。\n";
}
int main() {
	TPoint P1(3, 8);

	TPoint P2(P1);
	cout << "p2=" << P2.Xcoord() << "," << P2.Ycoord() << endl;

	return 0;
}
