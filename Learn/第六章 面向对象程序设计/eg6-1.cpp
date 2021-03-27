#include<iostream>
using namespace std;
class Test {
private:
	int s;
public:
	void setSum(int x, int y) {
		s = x + y;
	}
	void print() {
		cout << "x+y=" << s << endl;
	}
};
int main() {
	Test t;
	t.setSum(3, 8);
	t.print();

	return 0;
}
