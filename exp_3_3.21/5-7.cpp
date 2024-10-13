#include<iostream>
using namespace std;
class Cat{
    public:
    Cat(int age):CatAge(age){
        NumOfCat++;
    }

    virtual ~Cat(){
        NumOfCat--;
    }

    virtual int getAge(){
        return CatAge;
    }

    virtual void setAge(int age){
        CatAge=age;
    } 

    static int getNum(){
        return NumOfCat;
    }

    void print_it2(){
        cout<<"There are "<<NumOfCat<<"cats."<<endl;
    }

    private:
    int CatAge;
    static int NumOfCat;

};

int Cat::NumOfCat=0;

void print_it(){
    cout<<"There are "<<Cat::getNum()<<"cats."<<endl;
}

int main()
{
    const int Max=5;
    Cat*CatHouse[Max];

    for(int i=0;i<Max;i++){
        CatHouse[i]=new Cat(i+1);
        print_it();
    }

    for(int i=0;i<Max;i++){
        delete CatHouse[i];
        print_it();
    }

    /*for(int i=0;i<Max;i++){
        CatHouse[i]=new Cat(i+1);
        CatHouse[i]->print_it2();
    }

    for(int i=0;i<Max;i++){
        delete CatHouse[i];
        CatHouse[i]->print_it2();
    }*/

    return 0;
}