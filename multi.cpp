#include<iostream>
using namespace std;
int main(){
    int arr[]={3,7,8,11,25};
    int n=5;
    bool found=0;
    int start=0,end=n-1;
    int target=56;
    while(start<end){
        if(arr[start]*arr[end]==target){
            found=1;
            cout<<arr[start]<<endl<<arr[end];
            break;
        }
        else {
            if(arr[start]*arr[end]>target){
            end--;
        }
        else{start++;}
            
        }
    }
if(!found){
    cout<<"not found";
}
}