#include<iostream>
using namespace std;
class Tdate {
public:
	int year, month, day;
	Tdate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
		cout << "执行Tdate构造函数:    " << endl;
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
};
class Ttime {
public:
	int hour, minute, second;
	Ttime(int h, int mi, int s) {
		hour = h;
		minute = mi;
		second = s;
		cout << "执行Ttime构造函数：    " << endl;
		cout << hour << ":" << minute << ":" << second << "." << endl;
	}
};
class Tdatetime :public Tdate {
public:
	int year;
	Ttime time;
	Tdatetime(int yy) :Tdate(2010, 10, 1), time(8, 0, 0) {
		year = yy;
		cout << "执行派生类构造函数：    " << endl;
		cout << year << "-" << month << "-" << day << " ";
		cout << time.hour << ":" << time.minute << ":" << time.second << "." << endl;
	}
};
int main() {
	Tdatetime dt(2011);

	return 0;
}
