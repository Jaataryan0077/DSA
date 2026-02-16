#include<iostream>
using namespace std;
int main(){
int arr[]={2,3,6,7,8};
int n=5;int key=9;
int start=0,end=n-1;
int index=n;
while(start<end){
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        index=mid;

    }else if(arr[mid]<key){
        start=mid+1;

    }
    else 
    index=mid;
    end=mid-1;
}
cout<<index;

}