//每次下沉一个最大的
//最差的情况是进行n-1次，但是可以在某一趟发现已排序完成，并结束程序
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
    bool canbreak=false;
    //int turn=0;
    for(int i=1;i<n;i++){
        if(canbreak){
            break;
        }
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
            }
            else{
                canbreak=true;
            }
        }
        //turn++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
        cout<<endl;
    }
    //cout<<endl<<turn<<endl;
    return 0;
}