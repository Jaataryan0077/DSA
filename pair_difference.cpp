#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,10,50,80};
    bool found=false; 
    int n=6;
    int start=0,end=1;
    int target=45;
    while(end<n){
        if(arr[end]-arr[start]==target){
            cout<<arr[start]<<endl;
            cout<<arr[end];
            
            found=true;break;
        }
        else{
            if(arr[end]-arr[start]<target){
                end++;
            }
            else{
                start++;
            }
        }
    }
    if(!found){
        cout<<"not found";
    }
}