#ifndef NODE_H_
#define NODE_H_

template <class T>
class Node {
private:
	Node<T>* next;
public:
	T data;
	Node() {data = 0; next = NULL;}//默认构造函数
//	Node(const Node<T>& n) {data = n.data; next = n.next;}//复制构造函数
	Node(const T& data, Node<T>* next = 0);//构造函数
	void insertAfter(Node<T>* p);//将Node插入链表
	void deleteAfter();//删除后一个
	Node<T>* nextNode();//返回下一个Node的指针
	const Node<T>* nextNode() const;//const返回下一个Node的指针
};

template <class T>
Node<T>::Node(const T &data, Node<T> *next): data(data), next(next) {}

template <class T>
Node<T>* Node<T>::nextNode() {
	return next;
}

template <class T>
const Node<T>* Node<T>::nextNode() const {
	return next;
}

template <class T>
void Node<T>::insertAfter(Node<T> *p) {
	p->next = next;
	next = p;
}

template <class T>
void Node<T>::deleteAfter() {
	Node<T>* tempPtr = next;
	if (next == 0){//有一个判断
		return;
	}
	next = tempPtr->next;
}

#endif //NODE_H_
