#include<iostream>
#include<string>
using namespace std;
void select(char a[], int n)
{
	int i, j, k;
	char t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = k + 1; j < n; j++)
			if (a[k] < a[j])
				k = j;
		t = a[k];
		a[k] = a[i];
		a[i] = t;
	}
}
void main()
{
	char a[50] = "";
	int n;
	cin >> a;
	cout << "输入的字符为：" << endl;
	cout << a << endl;
	n = strlen(a);
	select(a, n);
	cout << "降序排列处理后：" << endl;
	cout << a << endl;
}
