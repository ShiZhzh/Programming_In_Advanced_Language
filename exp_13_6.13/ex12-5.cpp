#include <iostream>
using namespace std;

int main()
{
    char *buf;
    try
    {
        buf = new char[512];
        buf = 0;
        if( buf == 0 )
            throw "内存分配失败!";
    }
    catch( const char * str )
    {
        cout << "有异常产生：" << str << endl;
    }
	return 0;
}
