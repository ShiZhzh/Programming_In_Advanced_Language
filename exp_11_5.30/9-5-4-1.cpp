#include<iostream>

/*template <typename T>  
void print(const T &t) { //�ݹ���ֹ�汾
    std::cout<<t<<std::endl;
} */ 
void print() { } //���ϵݹ���ֹ�汾Ҳ��д������

template <typename T, typename... TypeArgs>  
void print(const T &t, const TypeArgs&... args) { 
    std::cout<<t<<std::endl;
    print(args...);  //�ݹ���á�������չ��
}

int main(){
	print(3, 4.5, "hello world!");
	return 0;
} 
