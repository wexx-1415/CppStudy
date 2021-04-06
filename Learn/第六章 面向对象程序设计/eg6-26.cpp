#include<iostream>
using namespace std;
class CharSum {
	char x[20];
public:
	CharSum() {}
	CharSum(char s[]) {
		strcpy_s(x, s);
	}
	CharSum operator+(CharSum s) {
		int i = 0, j = 0;
		while (x[i] != '\0')
			i++;
		while ((x[i] = s.x[j]) != '\0') {
			i++;
			j++;
		}
		return x;
	}
	void disp() {
		cout << x << endl;
	}
};
int main() {
	CharSum str1("Hello,"), str2("C++!");
	CharSum str3;
	str3 = str1 + str2;
	str3.disp();

	return 0;
}
