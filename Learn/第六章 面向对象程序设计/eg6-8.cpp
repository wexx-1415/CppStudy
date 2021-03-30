#include<iostream>
using namespace std;
class Tdate {
public:
	Tdate();
	Tdate(int d);
	Tdate(int m, int d);
	Tdate(int m, int d, int y);
	~Tdate();
protected:
	int month;
	int day;
	int year;
	int x;
};
Tdate::Tdate() {
	x = 1;
	year = 2010;
	month = 4;
	day = 15;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int d) {
	x = 2; 
	year = 2010;
	month = 4;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int m, int d) {
	x = 3; 
	year = 2010;
	month = m;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int m, int d, int y) {
	x = 4;
	year = y;
	month = m;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::~Tdate() {
	cout << "析构函数d" << x << endl;
}
int main() {
	Tdate d1;
	Tdate d2(10);
	Tdate d3(2, 12);
	Tdate d4(10, 1, 2010);

	return 0;
}
