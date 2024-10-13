//从剩下的元素中找到最小的放到最前面,效率最低
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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
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