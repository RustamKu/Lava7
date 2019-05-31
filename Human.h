#include <iostream>
#include <string>
using  namespace std;
class Human {

protected:
	string name;
	string surname;
	string midname;
	int age;
public:
	Human() {}
	Human(string s, string n, string m, int a) {

		name = s;
		surname = n;
		midname = m;
		age = a;
	}

	virtual void print() = 0;
};

class Student : public Human {
public:
	bool on_lesson;

	void print() override {


		cout << "Name : ";
		cin >> name;
		cout << "Surname : ";
		cin >> surname;
		cout << "Midname : ";
		cin >> midname;
		cout << "Age : ";
		cin >> age;
		cout << "Name is " << name << " " << surname << " " << midname << " " << age << " years old" << endl;

		if (on_lesson) cout << "on lesson" << endl;
		else cout << "not on lesson" << endl;
	}
};

class Boss : public Human {

public:
	int num_of_wor;

	void print() {

		cout << "Name : ";
		cin >> name;
		cout << "Surname : ";
		cin >> surname;
		cout << "Midname : ";
		cin >> midname;
		cout << "Age : ";
		cin >> age;
		cout << "Name is " << name << " " << surname << " " << midname << " " << age << " years old" << endl;
		cout << "is the boss" << endl;
		cin >> num_of_wor;
		cout << "Workers num : " << num_of_wor << endl;
	}

};