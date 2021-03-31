#include<iostream>
using namespace std;
class Product {
private:
	int x;
	static long P;
public:
	Product(int a);
	void getdata();
};
long Product::P = 1;
Product::Product(int a) {
	x = a;
	P *= x;
}
void Product::getdata() {
	cout << "P=" << P << endl;
}
int main() {
	Product t(1);
	for (int i = 1; i < 10; i++) {
		t = i;
		cout << "i=" << i << " ";
		t.getdata();
	}
	return 0;
}
