#include<iostream>
using namespace std;
class Sum {
private:
	int s;
public:
	void setSum();
	void print();
};
void Sum::setSum() {
	s = 0;
	for (int i = 1; i <= 100; i++)
		s = s + i;
}
void Sum::print() {
	cout << "1+2+3+…+100=" << s << endl;
}
int main() {
	Sum a;
	a.setSum();
	a.print();

	return 0;
}
