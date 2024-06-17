#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
	Teacher(int age, string name)
		: age_(age), name_(name)
	{

	}
private:
	int age_;
	string name_;
};

class Student : public Teacher {
public:
	Student(int age, string name, string personality) : Teacher(age, name), personality_(personality)
	{

	}
private:
	string personality_;
};