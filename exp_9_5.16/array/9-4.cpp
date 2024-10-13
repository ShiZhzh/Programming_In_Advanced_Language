#include <iostream>
#include <iomanip>
#include "Array.h"
using namespace std;
int main() {
	Array<int> a(10);	// 用来存放质数的数组，初始状态有10个元素。
	int n, count = 0;
	cout << "Enter a value >= 2 as upper limit for prime numbers: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		bool isPrime = true;
		for (int j = 0; j < count; j++)  //检查i是否能被比它小的质数整除
			if (i % a[j] == 0) {	//若i被a[j]整除，说明i不是质数
				isPrime = false; break;
			}
		if (isPrime) { 
			if (count == a.getSize()) a.resize(count * 2);
			a[count++] = i;    //第1次将2放入a数组
		}
	}
	for (int i = 0; i < count; i++)
   	cout << setw(8) << a[i];
	cout << endl;
	return 0;
}
