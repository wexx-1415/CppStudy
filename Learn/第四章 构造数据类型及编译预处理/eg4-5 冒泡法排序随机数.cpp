#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Bubble(int a[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void main()
{
	int i = 0;
	int N = 100;
	int a[10];
	srand(time(0));
	cout << "排序前：" << endl;
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % N + 1;
		cout << a[i] << "\t";
	}
	cout << endl;
	Bubble(a, 10);
	cout << "排序后：" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << "\t";
}
