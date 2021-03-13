#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

template<class T>
void Bubble(T A[], T D)
{
	int i, j, temp;
	for (i = 1; i < D; i++)
	{
		for (j = 0; j < D - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}

template<class T>
int binaryfind(T A[], int D, T key)
{
	int low = 0, high, mid;
	high = D - 1;
	while (low <= high)
	{
		mid = (int)(low + high) / 2;
		if (key == A[mid])
			return mid;
		else if (key > A[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}



void main()
{
	const int key = 65;
	const int N = 100;
	int a[30], index, i;
	srand(time(0));
	cout << "生成的随机数：" << endl;
	for (i = 0; i < 30; i++)
	{
		a[i] = rand() % N + 1;
		cout << a[i] << "\t";
	}
	cout << endl;
	Bubble(a, 30);

	index = binaryfind(a, 30, key);
	if (index > -1)
		cout << "在第" << index + 1 << "个元素的位置查找到" << key << endl;
	else
		cout << "没有查找到" << key << endl;
}
