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
    cout<<"input p:";
    int p;
    cin>>p;
    bool canbreak=false;
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
    }
    int low=0;
    int hig=n-1;
    int po=0;
    bool find=false;
    while(low<=hig){
        int mid=(low+hig)/2;
        if(p=a[mid]){
            po=mid;
            find=true;
        }
        else if(p<a[mid]){
            hig=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(find){
        cout<<po<<endl;
    }
    else{
        cout<<"can't find it "<<endl;
    }
    return 0;
}