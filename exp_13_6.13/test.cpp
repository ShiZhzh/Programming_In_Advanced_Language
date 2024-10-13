#include<iostream>
class A{
    public:
    int f(){
        return 1;
    }
};

namespace B
{
    class C{
        int a=0;
    };
}
//int a=A::f();
int main(){
    //int a=A::f();
    //int v=B::C;
    return 0;
}