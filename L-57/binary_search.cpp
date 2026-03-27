#include<iostream>
using namespace std;
int bs(int arr[],int X,int start,int end){
    int mid=start+(end-start)/2;
    if(arr[mid]==X){
        return mid;
    }
else if(arr[mid]<X){
        return bs(arr,X,mid+1,end);

    }
    return bs(arr,X,start,mid-1);
}
int main(){
    int arr[]={1,2,36,4,5};
  cout<< bs(arr,36,0,4);
}