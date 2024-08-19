﻿#include <iostream>
#include <string>
using namespace std;

class Animal {
public :
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "이름 " << name_ << endl;
		cout << "나이 " << age_ << endl;
	}

	void bark()
	{
		cout << "잘 짖는다" << endl;
	}

	void sleep()
	{
		cout << "잘 잔다" << endl;
	}

	void eat()
	{
		cout << "잘 먹는다" << endl;
	}

private:
	string name_;
	unsigned int age_;
};

class Human : public Animal
{
public:
	//부모(Animal) 생성자가 먼저 호출된다.
	Human(string name, unsigned int age, bool right)
		: Animal(name, age), right_(right) //멤버변수(매개변수)
	{
		cout << "인권 존재 여부 " << right_ << endl;
	}

	void bark()
	{
		cout << "톡톡" << endl;
	}

	void sleep()
	{
		cout << "쿨쿨" << endl;
	}

	void eat()
	{
		cout << "냠냠" << endl;
	}

private:
	bool right_;
};

void main(void)
{
	Animal* ani = new Animal("정민레이디", 18);

	ani->bark();
	ani->eat();
	ani->sleep();

	Human* hum = new Human("지혜레이디", 18, true);

	hum->bark();
	hum->eat();
	hum->sleep();

	delete hum;
	delete ani;
}