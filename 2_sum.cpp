#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,18,25};
    int target=22;
    int n=6,start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<arr[start]<<endl;
            cout<<arr[end];
            break;

        }
        else {
             if(arr[start]+arr[end]<target)
             {
                start++;
             }
             else{end--;}
        }

    }
}