#include<iostream>
#include<climits> 
using namespace std;
int main()
{
    int arr[]={2,3,4,5,6,7};
    int i=0;int j=5;
    while(i<j){
    swap(arr[i],arr[j]);
    i++,j--;};
    for(i=0;i<5;i++)
    cout<<arr[i];
}