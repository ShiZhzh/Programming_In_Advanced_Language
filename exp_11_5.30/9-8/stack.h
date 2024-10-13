//Stack.h
#ifndef STACK_H
#define STACK_H
#include <cassert> 
#include<iostream>

template <class T,int SIZE=50>
class Stack {
    private:
        T list[SIZE];
        int top;
    public:
        Stack();
        void push(const T &item);
        T pop();
        void clear();
        const T &peek() const;
        bool isEmpty() const;
        bool isFull() const;
        int Size() const;
};

//ģ���ʵ��
template <class T, int SIZE>
Stack<T, SIZE>::Stack() : top(-1) { }	

template <class T, int SIZE>
void Stack<T, SIZE>::push(const T &item) {	
	assert(!isFull());	
	list[++top] = item;	
}

template <class T, int SIZE>
T Stack<T, SIZE>::pop() {	
	assert(!isEmpty());	
	return list[top--];	
}

template <class T, int SIZE>
const T &Stack<T, SIZE>::peek() const {
	assert(!isEmpty());	
	return list[top];	//����ջ��Ԫ��
}

template <class T, int SIZE>
bool Stack<T, SIZE>::isEmpty() const {
	return top == -1;
}

template <class T, int SIZE>
bool Stack<T, SIZE>::isFull() const {	
	return top == SIZE - 1;
}

template <class T, int SIZE>
void Stack<T, SIZE>::clear() {	
	top = -1;
}

///////////////////ƫ�ػ�//////////////
template <int SIZE>  //�ɱ����
class Stack<bool, SIZE> { //bool�̶�
private:
	enum {
	   UNIT_BITS = sizeof(unsigned) * 8,
	   ARRAY_SIZE=(SIZE-1) / UNIT_BITS + 1
	};
	unsigned list[ARRAY_SIZE];
	int top;	
public:
	Stack();
	void push(bool item);
	bool pop();
	void clear();
    bool peek() const;
	bool isEmpty() const; 
	bool isFull() const;
    int Size() const;
};

template <int SIZE>
Stack<bool, SIZE>::Stack() : top(-1) { }	//���캯����ջ����ʼ��Ϊ-1

template <int SIZE>
void Stack<bool, SIZE>::push(bool item) {
	assert(!isFull());
	int index = ++top / UNIT_BITS;
    //std::cout<<ARRAY_SIZE<<std::endl; //index=0,array_size=1
	list[index] = (list[index] << 1) | (item ? 1 : 0);
}

template <int SIZE>
bool Stack<bool, SIZE>::pop() {
	assert(!isEmpty());
	int index = top-- / UNIT_BITS;
	bool result = ((list[index] & 1) == 1);
	list[index] >>= 1; 
	return result;
}

template <int SIZE>
bool Stack<bool, SIZE>::isFull() const {	//�����Ƿ�ջ��
	return top == SIZE - 1;
}

template <int SIZE>
bool Stack<bool, SIZE>::isEmpty() const {	//����ջ�Ƿ��
	return top == -1;
}

template <int SIZE>
 bool Stack<bool, SIZE>::peek() const {	//����ջ��Ԫ��
	assert(!isEmpty());	//���ջΪ�գ��򱨴�
	int index = top / UNIT_BITS;
	bool result = ((list[index] & 1) == 1);
	return result;	//����ջ��Ԫ��
}

template <class T, int SIZE>
int Stack<T, SIZE>::Size() const{	
	return top+1;
}

template <int SIZE>
int Stack<bool, SIZE>::Size() const{	
	return top+1;
}

#endif	//STACK_H
