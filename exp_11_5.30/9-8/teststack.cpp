#include"Stack.h"
#include<iostream>
using namespace std;
int main(){
	Stack<int,3> s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<" size:"<<s.Size()<<" top:"<<s.peek()<<endl;
	
	Stack<bool,3> s1;
	s1.push(true);
	s1.push(false);
	s1.push(true);
	cout<<" size:"<<s1.Size()<<" top:"<<s1.peek()<<endl;
		
	return 0;
} 
