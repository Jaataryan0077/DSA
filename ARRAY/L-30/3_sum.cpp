#include<iostream>
using namespace std;
int main(){
    int arr[]={
        1,4,6,8,10,45};
    int X=13;
    int ans=0;
    int n=6;
    for(int i=0;i<n-2;i++){
        int start=i+1,end=n-1;
        ans=X-arr[i];
        while(start<end){
            if(arr[start]+arr[end]==ans){   cout<<arr[i]<<endl;
                cout<<arr[start]<<endl;
                cout<<arr[end]<<endl;
                break;
            }
            else{
                if(arr[start]+arr[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
     
    }

    }
