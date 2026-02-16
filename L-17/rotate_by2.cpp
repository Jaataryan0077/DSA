#include<iostream>
#include<climits> 
using namespace std;
int main(){
    int arr[]={1,2,3,4,5},n=5;
    int k=2;
    int temp=5;
    for(int r=0;r<k;r++){
    temp=arr[n-1];
    for(int i=4;i>=0;i--)
   { arr[i+1]=arr[i];}
   arr[0]=temp;}
for(int i=0;i<n;i++)
cout<<arr[i];
}