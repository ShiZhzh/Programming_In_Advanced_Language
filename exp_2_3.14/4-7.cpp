#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名，字符串对象，将在第6章详细介绍
	char sex;		//性别
	int age;		//年龄
};

class Stud{
    private:
        int num1;
        string name1;
        char sex1;
        int age1;
    public:
        Stud(int num , string name , char sex , int age){
            num1 = num;
            name1 = name;
            sex1 = sex;
            age1 = age;
        }
        void output(){
            cout << "Num:  " << num1 << endl;
	        cout << "Name: " << name1 << endl;
	        cout << "Sex:  " << sex1 << endl;
	        cout << "Age:  " << age1 << endl;
        }
};

int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;

    Stud stu2(97001, "Lin Lin", 'F', 19);
    stu2.output();
	return 0;
}

/*运行结果：
Num:  97001
Name: Lin Lin
Sex:  F
Age:  19*/