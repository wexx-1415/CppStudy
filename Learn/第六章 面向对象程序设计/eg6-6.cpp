#include<iostream>
using namespace std;
class Tdate {
public:
	Tdate();
	Tdate(int d);
	Tdate(int m, int d);
	Tdate(int m, int d, int y);
protected:
	int month;
	int day;
	int year;
};
Tdate::Tdate() {
	year = 2010;
	month = 4;
	day = 15;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int d) {
	year = 2010;
	month = 4;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int m, int d) {
	year = 2010;
	month = m;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
Tdate::Tdate(int m, int d, int y) {
	year = y;
	month = m;
	day = d;
	cout << year << "/" << month << "/" << day << endl;
}
int main() {
	Tdate d1;
	Tdate d2(10);
	Tdate d3(2, 12);
	Tdate d4(10, 1, 2010);

	return 0;
}
