#include<iostream>
using namespace std;

class Base1{
    public:
        int var;
        void fun(){
            cout<<"Member of Base1"<<endl;
        }
};
class Base2{
    public:
        int var;
        void fun(){
            cout<<"Member of Base2"<<endl;
        }
};
class Derived:public Base1,public Base2{
    public:
        int var;
        void fun(){
            cout<<"Member of Derived"<<endl;
        }
};
int main(){
    Derived d;
    cout<<"Base pointer: "<<&d<<endl;
    cout<<"Base1's var: "<<&(d.Base1::var)<<endl;
    cout<<"Base2's var: "<<&(d.Base2::var)<<endl;
    cout<<"Derived's var: "<<&(d.var)<<endl;

    return 0;
}
/*
Base pointer: 0x5a04fffb24
Base1's var: 0x5a04fffb24
Base2's var: 0x5a04fffb28
Derived's var: 0x5a04fffb2c
*/