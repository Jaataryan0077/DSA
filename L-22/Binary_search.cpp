#include<iostream>
using namespace std;
int main(){

    int arr[]={2,3,4,5,6,7};int n=6;

    int key=5;
    int start=0,end=n-1;
while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==key){
    cout<<"got it "<<arr[mid];
return 0;}
    else if(arr[mid]<key)
    start=mid+1;
    else
    end=mid-1;}
cout<<"not found";
    


}