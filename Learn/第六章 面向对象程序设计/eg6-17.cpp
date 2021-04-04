#include<iostream>
using namespace std;
int main() {
	int* pi;
	pi = new int;
	*pi = 3;
	cout << "pi=" << pi << " *pi=" << *pi << endl;
	float* pf;
	pf = new float;
	*pf = 3.5f;
	cout << "pf=" << pf << " *pf=" << *pf << endl;
	double* pd;
	pd = new double(4.2);
	cout << "pd=" << pd << " *pd=" << *pd << endl;
	delete pi;
	delete pf;
	delete pd;

	return 0;
}
