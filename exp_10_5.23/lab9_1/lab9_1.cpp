#include <iostream>
#include "node.h"
using namespace std;

int main()
{
	int a[10];
	Node<int> n[10];
	cout << "����10������:" << endl;
	for (int i = 0; i < 10; i ++) {
		cin >> a[i];
	}
	for (int i = 0; i < 9; i ++) {
		n[i].data = a[i];
		n[i].insertAfter(&n[i+1]);
	}
	n[9].data = a[9];//���һ��nextΪNULL
	Node<int>* np = &n[0];
	while (np != NULL) {
		cout << np->data << ' ';
		np = np->nextNode();
	}
	cout << endl;
	int f;
	cout << "������Ҫ���ҵ�����";
	cin >> f;
	Node<int> p(0, &n[0]);
	/*np = &p;
	while (np->nextNode() != NULL) {
		while (np->nextNode()->data == f){
			np->deleteAfter();
		}
		np = np->nextNode();
	}*/
	Node<int>* current = &p; // ����ʱͷ�ڵ㿪ʼ
	/*if(current->data==f){
		current=current->nextNode();
	}*/
	while (current->nextNode() != NULL) {
    	if (current->nextNode()->data == f) {
        	current->deleteAfter();
    	} 
		else {
        	current = current->nextNode(); // ֻ���ڲ�ɾ���ڵ�ʱ���ƶ�����һ��
    	}
	}
	cout << "ɾ���������" << endl;
	np = &p;
	while (np != NULL) {
		cout << np->data << ' ';
		np = np->nextNode();
	}
	np = &p;
	while (np->nextNode() != NULL)//�������
		np->deleteAfter();
	cout << endl;
	return 0;
}
/*
����10��������
2 3 5 1 2 4 5 6 8 9
2 3 5 1 2 4 5 6 8 9
������Ҫ���ҵ�����5
ɾ���������
2 3 1 2 4 6 8 9
*/

//to run it print cmake -g "mingw makefiles".. 