#include<iostream>
using namespace std;
int main(){
    //variable k liye heap memory allocate krna
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;

    int n;
    cin>>n;
    int *ptr1=new int[n];
    for(int i=0;i<n;i++){
        ptr1[i]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<ptr1[i]<<endl;
    }
    delete ptr;
    delete[] ptr1;
}