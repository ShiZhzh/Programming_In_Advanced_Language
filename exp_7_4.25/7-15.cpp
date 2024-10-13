#include<iostream>
using namespace std;
struct Base1{int x;};
struct Base2{float y;};
struct Derived:Base1,Base2{};
int main(){
    Derived *pd=new Derived;
    pd->x=1;
    pd->y=2.0f;
    void *pv=pd;
    Base2*pb=static_cast<Base2*>(pv);
    //Base2*pb=static_cast<Base2*>(pd);
    //Base2*pb=pd;
    cout<<pd->y<<"\n"<<pb->y<<endl;
    delete pd;
    return 0;
}
/*
2
1.4013e-45
*/
    /*
    指向基类的指针或引用转换为指向派生类的指针或引用
    但这是不安全的，因为在转换过程中没有运行时检查。
    如果确实需要运行时检查，应使用 dynamic_cast
    */