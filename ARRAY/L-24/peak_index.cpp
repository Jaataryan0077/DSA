#include<iostream>
using namespace std;
int main(){
    int n=6;
    int start=0,end=n-1;
    int arr[]={10,1,4,5,6,7};
     while(start<=end){
        int mid=start+(end-start)/2;
    if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
    cout<<mid;
    break;}
    else if(arr[mid]>arr[mid-1])
    start=mid+1;
    else{
    end=mid-1;
    }
     }
   




}