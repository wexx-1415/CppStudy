#include<iostream>
#include<string>
using namespace std;
void main()
{
	char a[30];
	int i, j;
	double d[] = { 25.6,18.3,22.4,29.0,19.7 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 30; j++)
			a[j] = ' ';
		for (j = 0; j<int(d[i] + 0.5); j++)
			a[j] = '*';
		cout << "A00" << i + 1 << ": ";
		for(j = 0; j < 30; j++)
			cout << a[j];
		cout << endl;
	}
}
