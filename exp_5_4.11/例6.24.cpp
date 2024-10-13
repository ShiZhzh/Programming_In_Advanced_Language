#include <iostream>
#include <string>
using namespace std;
int main() {
	for (int i = 0; i < 2; i++)	{
		string city, state;
		getline(cin, city, ','); //设置逗号分隔符
		getline(cin, state);    //恢复回车分隔符
		cout << "City:" << city << " State:" << state << endl;
    }
    return 0;
}
