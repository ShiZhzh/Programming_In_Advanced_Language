//11_8.cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string line;
    char *p=new char[101];
    cout << "Type a line terminated by 't' " << endl; 
	//getline(cin, line, 't');
    //cout << line << endl;
    cin.get(p,100,'t');
    cout<<p;
    delete p;
	return 0;
}
