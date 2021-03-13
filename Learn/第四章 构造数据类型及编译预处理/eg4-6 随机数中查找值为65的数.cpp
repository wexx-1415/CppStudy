#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

template<class T>//函数模板不会啊啊啊啊
  //我无法理解为什么这题会用到template，whyyyyyyyyyyyyyyyyyy？
int find(T A[], int D, T key)
{
	for (int i = 0; i < D; i++)
	{
		if (A[i] == key)
			return i;
	}
	return -1;
}
void main()
{
	const int N = 100;
	const int key = 65;
	int index;
	int i, a[30];
	srand(time(0));
	cout << "生成的随机数：" << endl;
	for (i = 0; i < 30; i++)
	{
		a[i] = rand() % N + 1;
		cout << a[i] << "\t";
	}
	cout << endl;
	index = find(a, 30, key);

	if (index > -1)
		cout << "在第" << index + 1 << "个元素的位置查找到" << key << endl;
	else
		cout << "数据中没有查找到" << key << endl;
}
