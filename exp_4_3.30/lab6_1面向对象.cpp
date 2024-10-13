#include<iostream>
using namespace std;

class Mtr{
    private:
    int a[3][3];

    public:
    Mtr(){}
    ~Mtr(){}
    void input();
    void swap(int& a,int&b);
    void swap_it();
    void output();
};

void Mtr::input(){
    cout << "输入9个整数作为矩阵元素值" << endl;
    for (int i = 0; i < 3; i ++)
		for (int j = 0; j < 3; j ++)
			cin >> a[i][j];
}
void Mtr::swap(int& a, int&b) {
	int temp = a;
	a = b;
	b = temp;
}
void Mtr::swap_it(){
    for (int i = 0; i < 3; i ++)
		for (int j = 0; j < i; j ++)
			swap(a[i][j], a[j][i]);
}
void Mtr::output(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << a[i][j] << ' ';
        }
        cout<<endl;    
    }     
    cout<<endl;
}

int main()
{
    Mtr A;
    A.input();
    cout << "初始矩阵：" << endl;
    A.output();
    A.swap_it();
    A.output();

    return 0;
}