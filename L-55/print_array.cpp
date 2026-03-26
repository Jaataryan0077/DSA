#include<iostream>
using namespace std;
/* void print(int arr[],int index,int n)
{
    if(index==n){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
int main(){
    int arr[]={3,4,5,3,1};
    print(arr,0,5);
} */

//with two parameters
 
void print(int arr[],int index){
    if(index==-1){
        return;
    }   
    print(arr,index-1);
    cout<<arr[index]<<" ";
}
int main(){
    int arr[]={4,43,345,5};
    print(arr,3);
}