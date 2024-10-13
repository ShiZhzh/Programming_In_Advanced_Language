#include <iostream>
#include "node.h"
using namespace std;

int main()
{
	int a[10];
	Node<int> n[10];
	cout << "输入10个整数:" << endl;
	for (int i = 0; i < 10; i ++) {
		cin >> a[i];
	}
	for (int i = 0; i < 9; i ++) {
		n[i].data = a[i];
		n[i].insertAfter(&n[i+1]);
	}
	n[9].data = a[9];//最后一个next为NULL
	Node<int>* np = &n[0];
	while (np != NULL) {
		cout << np->data << ' ';
		np = np->nextNode();
	}
	cout << endl;
	int f;
	cout << "请输入要查找的数：";
	cin >> f;
	Node<int> p(0, &n[0]);
	/*np = &p;
	while (np->nextNode() != NULL) {
		while (np->nextNode()->data == f){
			np->deleteAfter();
		}
		np = np->nextNode();
	}*/
	Node<int>* current = &p; // 从临时头节点开始
	/*if(current->data==f){
		current=current->nextNode();
	}*/
	while (current->nextNode() != NULL) {
    	if (current->nextNode()->data == f) {
        	current->deleteAfter();
    	} 
		else {
        	current = current->nextNode(); // 只有在不删除节点时才移动到下一个
    	}
	}
	cout << "删除后的链表：" << endl;
	np = &p;
	while (np != NULL) {
		cout << np->data << ' ';
		np = np->nextNode();
	}
	np = &p;
	while (np->nextNode() != NULL)//清空链表
		np->deleteAfter();
	cout << endl;
	return 0;
}
/*
输入10个整数：
2 3 5 1 2 4 5 6 8 9
2 3 5 1 2 4 5 6 8 9
请输入要查找的数：5
删除后的链表：
2 3 1 2 4 6 8 9
*/

//to run it print cmake -g "mingw makefiles".. 