#include<iostream>
using namespace std;
struct student
{
	int id;
	char name[10];
	char major[20];
};
void main()
{
	struct student stu1 = { 1001,"陈红","计算机" }, stu2;
	stu2 = stu1;
	cout << "学号  " << "姓名  " << "专业  " << endl;
	cout << stu1.id << stu1.name << stu1.major << endl;
	cout << stu2.id << stu2.name << stu2.major << endl;

}
