#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Selection(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
	Selection(a, 10);
	cout << "排序后：" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << "\t";
}
