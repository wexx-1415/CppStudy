//visual studio中使用strcpy和strcat函数时会显示To disable deprecation , use _CRT_SECURE_NO_WARNINGS，解决方案在代码末
//问题出现的原因：微软认为strcpy函数的安全性比较差，容易出现内存泄露，所以强制要求使用strcpy_s函数代替strcpy函数
#include<iostream>
using namespace std;
void main()
{
	char s[20] = "abcdefg";
	int count = 0;
	count = (int)strlen(s);
	cout << "字符串有效长度 ";
	cout << s << ":" << count << endl;

	char s1[20] = "123456789", s2[20];
	strcpy_s(s2, s1);
	cout << "复制字符串 ";
	cout << "s2: " << s2 << endl;

	char s3[10] = "abc", s4[10] = "def";
	strcat_s(s3, s4);
	cout << "连接字符串 ";
	cout << "s3: " << s3 << endl;

	int n;
	n = strcmp(s3, s4);
	cout << "两字符串比较结果 ";
	if (n > 0)
		cout << "s3>s4" << endl;
	else if (n == 0)
		cout << "s3=s4" << endl;
	else
		cout << "s3<s4" << endl;
}
//解决方法：
//1.在函数名后面加上_s
//2.可以在项目-属性-配置属性-c/c++-预处理器-预处理定义里边加上一句：_CRT_SECURE_NO_WARNINGS
//3.在程序开头添加一条语句：#pragma warning(disable:4996)
