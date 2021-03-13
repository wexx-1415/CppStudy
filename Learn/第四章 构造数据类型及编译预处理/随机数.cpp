#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	int i = 0;
	int N = 100;
	int a[10];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % N + 1;
		cout << a[i] << "\t";
	}
}
//srand函数需要头文件cstdlib，但我不加头文件实操下来并没有啥区别

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
void main()
{
	int i = 0;
	int N = 100;
	int a[10];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % N + 1;
		cout << a[i] << "\t";
	}
}
