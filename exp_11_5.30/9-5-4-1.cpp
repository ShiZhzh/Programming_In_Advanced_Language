#include<iostream>

/*template <typename T>  
void print(const T &t) { //递归终止版本
    std::cout<<t<<std::endl;
} */ 
void print() { } //以上递归终止版本也可写成这样

template <typename T, typename... TypeArgs>  
void print(const T &t, const TypeArgs&... args) { 
    std::cout<<t<<std::endl;
    print(args...);  //递归调用、参数包展开
}

int main(){
	print(3, 4.5, "hello world!");
	return 0;
} 
