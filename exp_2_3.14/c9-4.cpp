#include <iostream>
using namespace std;
class Box
 {public:
   /*Box();*/
   Box(int=10,int=10,int=10);   //参数默认值ֵ 
   int volume();
   void output();
  private:
   int height;
   int width;
   int length;
 };
 
Box::Box(int h,int w,int len):height(h),width(w),length(len){ }

/*Box::Box(){

}*/

int Box::volume()
 {return(height*width*length);
 }
 
void Box::output(){
  cout<<"height is "<<height<<endl;
  cout<<"width is "<<width<<endl;
  cout<<"length is "<<length<<endl;
}

int main()
 {
  Box box1;
  box1.output();
  cout<<"The volume of box1 is "<<box1.volume()<<endl;
  Box box2(15);
  box2.output();
  cout<<"The volume of box2 is "<<box2.volume()<<endl;
  Box box3(15,30);
  box3.output();
  cout<<"The volume of box3 is "<<box3.volume()<<endl;
  Box box4(15,30,20);
  box4.output();
  cout<<"The volume of box4 is "<<box4.volume()<<endl;
  return 0;
 }
/*The volume of box1 is 1000
The volume of box2 is 1500
The volume of box3 is 4500
The volume of box4 is 9000
*/
 
 
