#include <iostream>
using namespace std;
class Box{
 public:
   Box();                  
   Box(int h,int w ,int len):height(h),width(w),length(len){}   //参数初始化表
   int volume();
   /*void output();*/
  private:
   int height;
   int width;
   int length;
 };
Box::Box() {                
  height=10;
  width=10;
  length=10;
 }

int Box::volume(){
    return(height*width*length);
 }
/*
void Box::output(){
  cout<<"height is "<<height<<endl;
  cout<<"width is "<<width<<endl;
  cout<<"length is "<<length<<endl;
}*/

int main()
 {
  Box box1;    
  /*box1.output();*/                            
  cout<<"The volume of box1 is "<<box1.volume()<<endl;
  Box box2(15,30,25);                          
  cout<<"The volume of box2 is "<<box2.volume()<<endl;
  return 0;
 }
/*
The volume of box1 is 1000
The volume of box2 is 11250
*/