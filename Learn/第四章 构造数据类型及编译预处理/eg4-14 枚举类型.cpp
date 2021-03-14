#include<iostream>
using namespace std;
enum Color{red,green,blue};
void main()
{
	Color x, y, z;
	x = Color(red);
	y = Color(blue);
	z = Color(green);
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}
