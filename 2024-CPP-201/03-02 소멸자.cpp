﻿#include <iostream>
#include <string.h>
using namespace std;

class Student{
public:
	//ex) name : "윤주영"
	Student(int hakbun, char* name)
		: hakbun_(hakbun), name_(name)
	{
		this->hakbun_ = hakbun;
		// 동적할당
		name_ = new char[18];
		// 동적할당된 위치(name_)에 "윤주영"(name)을 복사한다
		strcpy(name_, name);
	}

	Student() {}

	//소멸자 : 객체가 사라질 때(메모리 공간이 해제될 때) 호출되는 함수
	~Student() {
		delete []name_;
	}

	void print(void) {
		cout << hakbun_ << " " << name_ << endl;
	}

private:
	int hakbun_;
	char* name_;
};

void main(void)
{
	//Student stu = Student(2115, (char*)"윤주영");
	//stu.print();

	Student* stu = new Student(2115, (char*)"윤주영");
	stu->print();

	delete stu;
}