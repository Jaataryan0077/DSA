#include<iostream>
using namespace std;
int ls(int arr[],int X,int index,int n){
    if(index==n){
        return 0;
    }
    if(arr[index]==X){
        return index;

    }
    return ls(arr,X,index+1,n);
}
int main(){
    int arr[]={1,2,3,4,5};
  cout<<  ls(arr,3,0,4);
}