#ifndef NODE_H_
#define NODE_H_

template <class T>
class Node {
private:
	Node<T>* next;
public:
	T data;
	Node() {data = 0; next = NULL;}//Ĭ�Ϲ��캯��
//	Node(const Node<T>& n) {data = n.data; next = n.next;}//���ƹ��캯��
	Node(const T& data, Node<T>* next = 0);//���캯��
	void insertAfter(Node<T>* p);//��Node��������
	void deleteAfter();//ɾ����һ��
	Node<T>* nextNode();//������һ��Node��ָ��
	const Node<T>* nextNode() const;//const������һ��Node��ָ��
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
	if (next == 0){//��һ���ж�
		return;
	}
	next = tempPtr->next;
}

#endif //NODE_H_
