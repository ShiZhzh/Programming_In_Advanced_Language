#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	string address;
	string city;
	string code;
public:
	Employee(string n = "", string add = "", string ct = "", string cd = "") : name(n), address(add), city(ct), code(cd) {}
	Employee(Employee* e) {
		name = e->name;
		address = e->address;
		city = e->city;
		code = e->code;
	}
	void display() {
		cout << "name: " << name << endl;
		cout << "address: " << address << endl;
		cout << "city: " << city << endl;
		cout << "code: " << code << endl;
	}
	void change_name(string nm) {
		name = nm;
	}
};

#endif
