#include <iostream>
#include <string>

using namespace std;
// 日期类
class Date {
public:
    int year;
    int month;
    int day;
    
};

class employee {
private:
    string id;
    char gender;
    Date birthDate;
    string idNumber;

public:
    // 构造函数
    employee(string personId , char personGender , Date personBirthDate , string personIdNumber){
        id = personId;
        gender = personGender;
        birthDate = personBirthDate;
        idNumber = personIdNumber;
        
     }

    // 拷贝构造函数
    employee(const employee &employee) {
        id = employee.id;
        gender = employee.gender;
        birthDate = employee.birthDate;
        idNumber = employee.idNumber;
    }

    // 析构函数
    ~employee() {
        cout << "class over!" << endl;
    }

    // 成员函数：录入人员信息
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter gender (M/F): ";
        cin >> gender;
        cout << "Enter birth date (year month day): ";
        cin >> birthDate.year >> birthDate.month >> birthDate.day;
        cout << "Enter ID number: ";
        cin >> idNumber;
    }

    // 成员函数：显示人员信息
    void print() const {
        cout << "ID: " << id << endl;
        cout << "Gender: " << gender << endl;
        cout << "Birth Date: " << birthDate.year << "." << birthDate.month << "." << birthDate.day << endl;
        cout << "ID Number: " << idNumber << endl;   
    }
    void showAge(){
        int nowYear = 2024;
        int nowMon = 3;
        int nowDay = 14;
        int age = nowYear - birthDate.year;
        if(birthDate.month > nowMon){
            age--;
        }
        else if (birthDate.month = nowMon){
            if(birthDate.day>nowDay){
                age--;
            }
        }
        cout<<"Age: " << age << endl;
    }
};

int main() {
    Date Birth1 = {2005,1, 1};
    employee person1("202300130000", 'M', Birth1, "370901200501010000");
    employee person2 = person1; // 调用拷贝构造函数
    employee person3 = person1;
     
    person1.print();
    person2.print();
    person3.input();
    person3.print();
    person3.showAge();

    return 0;
}