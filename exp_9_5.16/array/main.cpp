#include"array.h"
#include<iostream>
using namespace std;

void read(int *p,int n){
    for(int i;i<n;i++){
        cin>>p[i];
    }
}

int main(){
    Array<int> a(10);
    read(a,10);
    return 0;
}