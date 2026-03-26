#include<iostream>
using namespace std;
int mini(int arr[],int index,int n){
    if(index==n-1){
    return arr[index];}
    return min(arr[index],mini(arr,index+1,n));
}
int main(){
    int arr[]={7,4,42,8,5};
    cout<<mini(arr,0,5);
}