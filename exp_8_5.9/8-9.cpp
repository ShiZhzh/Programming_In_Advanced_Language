#include <iostream>
using namespace std;
class Base {
public:
	virtual void fun1() { cout << "Base::fun1()" << endl; }
	virtual ~Base() { }
};
class Derived1: public Base {
public:
	virtual void fun1() { cout << "Derived1::fun1()" << endl; }
	virtual void fun2() { cout << "Derived1::fun2()" << endl; }
};
class Derived2: public Derived1 {
public:
	virtual void fun1() { cout << "Derived2::fun1()" << endl; }
	virtual void fun2() { cout << "Derived2::fun2()" << endl; }
}; 
void fun(Base *b) {
	b->fun1();
	//���Խ�bת��ΪDerived1ָ��
	Derived1 *d = static_cast<Derived1 *>(b);
	//�ж�ת���Ƿ�ɹ�
	if (d != 0) d->fun2();
    else 
	    cout<<b<<"  "<<d<<endl;

}
int main() {
	Base b;
	fun(&b);
	Derived1 d1;
	fun(&d1);
	Derived2 d2;
	fun(&d2);
	return 0;
}
/*
Base::fun1()
Derived1::fun1()
Derived1::fun2()
Derived2::fun1()
Derived2::fun2()
*/