#include<iostream>
using namespace std;
void main()
{
	union type
	{
		int n;
		char c;
	}data;
	data.n = 12;
	data.c = 'x';
	cout << data.n << endl;
	cout << data.c << endl;
	cout << "sizeof（data）=" << sizeof(data) << endl;
}
//为什么运行下来data.n是120..换了很多数最后输出都是120，很神奇
