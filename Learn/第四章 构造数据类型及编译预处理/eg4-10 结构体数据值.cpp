#include<iostream>
using namespace std;
void main()
{
	struct student
	{
		int id;
		char name[10];
		char major[20];
	}stu = { 1001,"陈红","计算机" };
	cout << "学号：" << stu.id << endl;
	cout << "姓名：" << stu.name << endl;
	cout << "专业：" << stu.major << endl;
}
