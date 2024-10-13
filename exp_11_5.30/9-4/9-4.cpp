//左插入，右插入，删除，显示
#include<iostream>
#include"dnode.h"
using namespace std;

int main(){
    int n;
    cout<<"size of list:";
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    DNode<int>*head=new DNode<int>();
    DNode<int>*p=new DNode<int>(a[0]);
    p->connectLeft(head);
    head->connectRight(p);
    p->connectRight(NULL);
    if(n>1){
        for(int i=1;i<n;i++){
            DNode<int>*now=new DNode<int>(a[i]);
            p->connectRight(now);
            now->connectLeft(p);
            now->connectRight(NULL);
            p=now;
            now=NULL;
        }
    }
    //输出
    p=head;
    while(p->nextNodeRight()!=NULL){
        cout<<p->nextNodeRight()->data<<' ';
        p=p->nextNodeRight();
    }
    cout<<endl;

    //p是第po个指针
    int po;
    cout<<"position of p:";
    cin>>po;
    p=head;
    for(int i=0;i<po;i++){
        p=p->nextNodeRight();
    }

    //左插入
    int num;
    cout<<"num:";
    cin>>num;
    DNode<int>*left=new DNode<int>(num);
    cout<<"insert "<<num<<" on left"<<endl;
    p->insertLeft(left);
    //右插入
    cout<<"num:";
    cin>>num;
    DNode<int>*right=new DNode<int>(num);
    cout<<"insert "<<num<<" on right"<<endl;
    p->insertRight(right);
    //删除
    p->deleteNode();
    //显示
    p=head;
    while(p->nextNodeRight()!=NULL){
        cout<<p->nextNodeRight()->data<<' ';
        p=p->nextNodeRight();
    }
    cout<<endl;

    return 0;
}