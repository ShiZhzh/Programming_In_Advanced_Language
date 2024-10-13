//将待排元素插入到已排元素的合适位置
#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int mid=0;
    mid=a;
    a=b;
    b=mid;
}

int main(){
    int n;
    cout<<"input n:"<<endl;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}