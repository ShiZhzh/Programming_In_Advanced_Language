//Ñ¡ÔñÅÅĞò
#include<iostream>
using namespace std;

template <class T>
void sorting(T *&array,int n){
    for(int i=0;i<n-1;i++){
        int p=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[p]){
                p=j;
            }
        }
        T mid=array[p];
        array[p]=array[i];
        array[i]=mid;
    }
}

template <class T>
void output(const T *array,int n){
    for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

//template <class T>
int main(){
    int n;
    cout<<"number: ";
    cin>>n;
    cout<<"choose type(1 is int,2 is double,3 is char):";
    int type;
    cin>>type;
    if(type==1){
        int*array=new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        sorting(array,n);
        output(array,n);
        delete array;
    }
    else if(type==2){
        double*array=new double[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        sorting(array,n);
        output(array,n);
        delete array;
    }
    else{
        cout<<"based on ASCII"<<endl;
        char*array=new char[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        sorting(array,n);
        output(array,n);
        delete array;
    }
    
    return 0;
}