//这个程序在vs上运行不了，会提示没有与参数列表匹配的构造函数
//查了一下是要使用const char* name,但是那样就没法在函数里面给姓名赋值，问题待解决

#include<iostream>
using namespace std;
class Student {
private:
	static int count, sum;
	int id, score;
	char* name;
public:
	Student(int id, char* name, int score);
	void printid();
	void printCA();
};
Student::Student(int id, char* name, int score) {
	this->score = score;
	this->id = id;
	this->name = name;
	count++;
	sum += this->score;
}
void Student::printid() {
	cout << "学号：" << id << " ";
	cout << "姓名：" << name << " ";
	cout << "成绩：" << score << endl;
}
void Student::printCA() {
	cout << "平均分：" << sum / 4 << endl;
	cout << "学生数：" << count << endl;
}
int Student::count = 0;
int Student::sum = 0;
int main() {
	Student stu1(1001, "陈红", 89), stu2(1002, "张大山", 78), stu3(2001, "赵志勇", 97), stu4(2002, "李明全", 91);
	stu1.printid();
	stu2.printid();
	stu3.printid();
	stu4.printid();
	stu1.printCA();

	return 0;
}
