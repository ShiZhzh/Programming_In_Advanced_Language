#include <iostream>
#include <iomanip>
#include "Array.h"
using namespace std;
int main() {
	Array<int> a(10);	// ����������������飬��ʼ״̬��10��Ԫ�ء�
	int n, count = 0;
	cout << "Enter a value >= 2 as upper limit for prime numbers: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		bool isPrime = true;
		for (int j = 0; j < count; j++)  //���i�Ƿ��ܱ�����С����������
			if (i % a[j] == 0) {	//��i��a[j]������˵��i��������
				isPrime = false; break;
			}
		if (isPrime) { 
			if (count == a.getSize()) a.resize(count * 2);
			a[count++] = i;    //��1�ν�2����a����
		}
	}
	for (int i = 0; i < count; i++)
   	cout << setw(8) << a[i];
	cout << endl;
	return 0;
}
