#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
void outputVector(const vector<int>&);
void intputVector(vector<int>&);
int main(){
    vector<int>integers1(7);
    vector<int>integers2(10);
    cout<<"the size of integers1: "<<integers1.size()
    <<endl<<"after initialization: ";
    outputVector(integers1);
    cout<<"the size of integers2: "<<integers2.size()
    <<endl<<"after initialization: ";
    outputVector(integers2);
    cout<<"\ninput 17 integers: "<<endl;
    intputVector(integers1);
    intputVector(integers2);
    cout<<"After input "<<endl;
    cout<<"integers1: ";
    outputVector(integers1);
    cout<<"\nintegers2: ";
    outputVector(integers2);
    if(integers1!=integers2){
        cout<<"integers1 and integers2 are not equal"<<endl;
    }
    vector<int>integers3(integers1);
    cout<<"the size of integers3: "<<integers3.size()
    <<endl<<"after initialization: ";
    outputVector(integers3);
    cout<<"\nAssigning integers2 to integers1."<<endl;
    integers1=integers2;
    cout<<"integers1: "<<endl;
    outputVector(integers1);
    cout<<"integers2: "<<endl;
    outputVector(integers2);
    if(integers1==integers2){
        cout<<"integers1 and integers2 are equal"<<endl;
    }
    cout<<"integers1[5]= "<<integers1[5]<<endl;
    integers1[5]=1000;
    cout<<"integers1[5]= "<<integers1[5]<<endl;
    //integers1.at(15)=1000;
    
}
void outputVector(const vector<int>&array){
    size_t i;
    for(i=0;i<array.size();i++){
        cout<<setw(12)<<array[i];
        if((i+1)%4==0){
            cout<<endl;
        }
        
    }
    if(i%4==0){
            cout<<endl;
        }
}
void intputVector(vector<int>&array){
    for(size_t i=0;i<array.size();i++){
        cin>>array[i];
    }
}    