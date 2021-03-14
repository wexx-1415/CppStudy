#include<iostream>
using namespace std;
struct student
{
	int id;
	char name[10];
	char major[20];
}stu;
void main()
{
	student stu;
	cout << "请输入学生信息：" << endl;
	cout << "学号：";
	cin >> stu.id;
	cout << "姓名：";
	cin >> stu.name;
	cout << "专业：";
	cin >> stu.major;
	cout << endl;
	cout << "显示学生信息：" << endl;
	cout << "学号：" << stu.id << endl;
	cout << "姓名：" << stu.name << endl;
	cout << "专业：" << stu.major << endl;
}
