#include <iostream>

using namespace std;
#ifndef HEADER_9_13_H
#define HEADER_9_13_H

//辅助函数：交换x和y的值
template <class T>
void mySwap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

//用起泡法对数组A的n个元素进行排序
template <class T>
void bubbleSort(T a[], int n) {
	int i = n - 1;	// i是下一趟需参与排序交换的元素之最大下标
	while (i > 0) {	//持续排序过程，直到最后一趟排序没有交换发生，或已达n - 1趟
		int lastExchangeIndex = 0;	//每一趟开始时，设置交换标志为0（未交换）
		for (int j = 0; j < i; j++)	//每一趟对元素a[0]..a[i]进行比较和交换
			if (a[j + 1] < a[j]) {	//如果元素a[j + 1] < a[j]，交换之
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;	//记录被交换的一对元素中较小的下标
			}
		i = lastExchangeIndex;	//将i设置为本趟被交换的最后一对元素中较小的下标
	}
}

//用起泡法对指针数组A的n个元素进行排序
template <class T>
void bubbleSort(T *a[], int n) {
	int i = n - 1;	// i是下一趟需参与排序交换的元素之最大下标
	while (i > 0) {	//持续排序过程，直到最后一趟排序没有交换发生，或已达n - 1趟
		int lastExchangeIndex = 0;	//每一趟开始时，设置交换标志为0（未交换）
		for (int j = 0; j < i; j++)	//每一趟对元素a[0]..a[i]进行比较和交换
			if (*a[j + 1] < *a[j]) {	//如果元素a[j + 1] < a[j]，交换之
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;	//记录被交换的一对元素中较小的下标
			}
		i = lastExchangeIndex;	//将i设置为本趟被交换的最后一对元素中较小的下标
	}
}
#endif	//HEADER_9_13_H

int main()
{
	int data[]={1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	int *p[20];

	for(int i=0; i<20; ++i)
	{
		p[i] = &data[i];
	}

	bubbleSort(p,20);
	for(int i=0; i<20; ++i)
	{
		cout << *p[i] << " ";
	}

	cout << endl;
	return 0;
}
