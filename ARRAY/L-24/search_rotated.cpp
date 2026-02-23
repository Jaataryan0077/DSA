#include<iostream>
using namespace std;
int main(){
int arr[]={4,5,0,1,2,3};
int n=6;
int start=0,end=n-1;

int target=3;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        cout<<mid;
        break;

    }
    else if(arr[mid]>arr[0]){
        if(arr[start]<=target && target<=arr[mid]){
           start=mid+1;  
        }
        else{
           end=mid-1;
        }
    }    
    else{
        if(arr[mid]<=target && target<=arr[end]){
             start=mid+1;
        }
        else{
           end=mid-1;
        }
    }
}


}