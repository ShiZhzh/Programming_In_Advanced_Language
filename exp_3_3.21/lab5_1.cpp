#include <iostream>
using namespace std;

void fn1(); 
int x = 1, y = 2; 

int main()
{
	cout << "Begin..." << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "Evaluate x and y in main()..." << endl;
	int x = 10, y = 20;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	{ 
	int x=3,y=4;
  	cout<<"in code block: "<<endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	}
	cout << "Step into fn1()..." << endl;
	fn1();
	cout << "Back in main" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
void fn1()
{
    int y = 200;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
/*
Begin...
x = 1
y = 2
Evaluate x and y in main()...
x = 10
y = 20
Step into fn1()...
x = 1
y = 200
Back in main
x = 10
y = 20
*/
/*改变之后
Begin...
x = 1
y = 2
Evaluate x and y in main()...
x = 10
y = 20
in code block:
x = 3
y = 4
Step into fn1()...
x = 1
y = 200
Back in main
x = 10
y = 20
*/