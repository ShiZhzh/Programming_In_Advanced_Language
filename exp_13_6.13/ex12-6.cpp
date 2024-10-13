#include<iostream>
#include <cassert>
#include<stdexcept>
template <class T>	//������ģ�嶨��
class Array {
private:
	T* list;		//���ڴ�Ŷ�̬����������ڴ��׵�ַ
	int size;		//�����С��Ԫ�ظ�����
public:
	Array(int sz = 50);		//���캯��
	Array(const Array<T> &a);	//�������캯��
	~Array();			//��������
	Array<T> & operator = (const Array<T> &rhs); 	//����"=��
	T & operator [] (int i); //����"[]��
	const T & operator [] (int i) const;	
	operator T * ();		//���ص�T*���͵�ת��
	operator const T * () const;
	int getSize() const;		//ȡ����Ĵ�С
	void resize(int sz);		//�޸�����Ĵ�С
};
template <class T> 
Array<T>::Array(int sz) {//���캯��
	assert(sz >= 0);//szΪ�����С��Ԫ�ظ�������Ӧ���Ǹ�
	size = sz;	// ��Ԫ�ظ�����ֵ������size
	list = new T [size];	//��̬����size��T���͵�Ԫ�ؿռ�
}
template <class T> 
Array<T>::~Array() { //��������
	delete [] list;
}
template <class T>
Array<T>::Array(const Array<T> &a) {//�������캯��
	size = a.size; //�Ӷ���xȡ�������С������ֵ����ǰ����ĳ�Ա
	//Ϊ���������ڴ沢���г�����
	list = new T[size];	// ��̬����n��T���͵�Ԫ�ؿռ�
	for (int i = 0; i < size; i++) //�Ӷ���X��������Ԫ�ص������� 
		list[i] = a.list[i];
}
//����"="�������������rhs��ֵ��������ʵ�ֶ���֮������帳ֵ
template <class T>
Array<T> &Array<T>::operator = (const Array<T>& rhs) {
	if (&rhs != this) {
//����������������С��rhs��ͬ����ɾ������ԭ���ڴ棬Ȼ�����·���
		if (size != rhs.size) {
			delete [] list;	//ɾ������ԭ���ڴ�
			size = rhs.size;	//���ñ�����������С
			list = new T[size];	//���·���n��Ԫ�ص��ڴ�
		}
		//�Ӷ���X��������Ԫ�ص�������  
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;	//���ص�ǰ���������
}
//�����±��������ʵ������ͨ����һ��ͨ���±����Ԫ�أ����Ҿ���Խ���鹦��
template <class T>
T &Array<T>::operator[] (int n) {
	if(n >= 0 && n < size){	//����±��Ƿ�Խ��
		return list[n];			//�����±�Ϊn������Ԫ��
	}
	else{
		throw std::out_of_range("invalid ? position(�±�Խ��)");
	}
}
template <class T>
const T &Array<T>::operator[] (int n) const {
	if(n >= 0 && n < size){ //����±��Ƿ�Խ��
		return list[n];			//�����±�Ϊn������Ԫ��
	}
	else{
		throw std::out_of_range("invalid ? position(�±�Խ��)");
	}
}
//����ָ��ת�����������Array��Ķ���ת��ΪT���͵�ָ��
template <class T>
Array<T>::operator T * () { //ת��ΪT���͵�ָ��T*������ת������
	return list;	//���ص�ǰ������˽��������׵�ַ
}
template <class T>
Array<T>::operator const T * () const {
	return list;	//���ص�ǰ������˽��������׵�ַ
}
//ȡ��ǰ����Ĵ�С
template <class T>
int Array<T>::getSize() const {
	return size;
}
// �������С�޸�Ϊsz
template <class T>
void Array<T>::resize(int sz) {
	assert(sz >= 0);	//���sz�Ƿ�Ǹ�
	if (sz == size)	//���ָ���Ĵ�С��ԭ�д�Сһ����ʲôҲ����
		return;
	T* newList = new T [sz];	//�����µ������ڴ�
	int n = (sz < size) ? sz : size;//��sz��size�н�С��һ����ֵ��n
	//��ԭ��������ǰn��Ԫ�ظ��Ƶ���������
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;		//ɾ��ԭ����
	list = newList;	// ʹlistָ��������
	size = sz;	//����size
}

int main(){
	try
	{
		Array<int> p(30);
		p[60]=1;//ʹ�±�Խ��
	}
	catch(const std::out_of_range& e)
	{
		//std::cout<<"error:"<<std::endl;
		std::cerr << e.what() << '\n';
	}
	
}