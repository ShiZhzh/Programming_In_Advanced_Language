//7_1.cpp
#include <iostream>
#include <cmath>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle rect;	//定义Rectangle类的对象，创建一个Point对象
	rect.initRectangle(2, 3, 20, 10);	//设置矩形的数据，又创建一个Point对象
		cout << "The data of rect(x,y,w,h): " << endl;
	cout << rect.getX() <<", "	//输出矩形的特征参数
		<< rect.getY() << ", "
		<< rect.getW() << ", "
		<< rect.getH() << endl;
	rect.move(3,2);	//移动矩形位置
	cout << "The data of rect(x,y,w,h): " << endl;
	cout << rect.getX() <<", "	//输出矩形的特征参数
		<< rect.getY() << ", "
		<< rect.getW() << ", "
		<< rect.getH() << endl;
	return 0;
}
/*
In Point constructor:2,3,this:0x1001ffd30
The data of rect(x,y,w,h):
2, 3, 20, 10
The data of rect(x,y,w,h):
5, 5, 20, 10
*/