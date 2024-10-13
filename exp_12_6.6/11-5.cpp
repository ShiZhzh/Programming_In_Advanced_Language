//11_5.cpp
#include<iostream>
#include <fstream>
using namespace std;
struct Date { 
	int mon, day, year;  
};
int main() {
	Date dt = { 7, 10, 92 };
	ofstream file("date.dat", ios_base::binary);
	file.write(reinterpret_cast<char *>(&dt),sizeof(dt));
	file.close();
    char*p=reinterpret_cast<char *>(&dt);
    cout<<p[4];//<<p[1]<<p[3]
	return 0;
}
