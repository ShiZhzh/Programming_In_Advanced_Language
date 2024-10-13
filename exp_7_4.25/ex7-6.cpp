#include <iostream>
using namespace std;
class Base1 {	//定义基类Base1
public:
	int var;
	void fun() { cout << "Member of Base1" << endl; }
    void fun(int a){}
};
class Base2 {	//定义基类Base2
public:
	int var;
	void fun() { cout << "Member of Base2" << endl; }
    void fun(int a,int b){}
};
class Derived: public Base1, public Base2 { //定义派生类Derived
public:
	int var;	//同名数据成员
	void fun() { cout << "Member of Derived" << endl; } //同名函数成员
};
int main() {
	Derived d;
	Derived *p = &d;
    d.Base1::fun(1);
    d.Base2::fun(2,3);

	d.var = 1;	//对象名.成员名标识
	d.fun();	//访问Derived类成员
	
	d.Base1::var = 2;	//作用域操作符标识
	d.Base1::fun();	//访问Base1基类成员
	
	p->Base2::var = 3;	//作用域操作符标识
	p->Base2::fun();	//访问Base2基类成员

	return 0;
}
/*
Member of Derived
Member of Base1
Member of Base2
*/