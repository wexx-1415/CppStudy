#include<iostream>
using namespace std;
class Base {
public:
	virtual void who() {
		cout << "这是基类Base！" << endl;
	}
};
class Dec1 :public Base {
public:
	void who() {
		cout << "这是派生类Dec1！" << endl;
	}
};
class Dec2 :public Base {
public:
	void who() {
		cout << "这是派生类Dec2!" << endl;
	}
};
int main() {
	Base obj, * ptr;
	Dec1 obj1;
	Dec2 obj2;
	cout << "通过指针访问虚函数：" << endl;
	ptr = &obj;
	ptr->who();
	ptr = &obj1;
	ptr->who();
	ptr = &obj2;
	ptr->who();
	cout << "通过对象访问虚函数：" << endl;
	obj.who();
	obj1.who();
	obj2.who();

	return 0;
}
