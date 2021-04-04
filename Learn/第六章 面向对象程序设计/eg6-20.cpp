#include<iostream>
using namespace std;
class Student {
private:
	int id, score;
	char* name;
	friend class Teacher;
};
class Teacher {
private:
public:
	void set_score(Student& stu, int id, char* name, int x);
	void play_score(Student& stu);
};
void Teacher::set_score(Student& stu, int id, char* name, int x) {
	stu.id = id;
	stu.name = name;
	stu.score = x;
}
void Teacher::play_score(Student& stu) {
	cout << "学号 " << " 姓名 " << " 成绩" << endl;
	cout << stu.id << " " << stu.name << " " << stu.score << endl;
}
int main() {
	Student stu;
	Teacher t;
	t.set_score(stu, 1001, "陈红", 89);
	t.play_score(stu);

	return 0;
}
