#include<iostream>
using namespace std;
int main(){
    int arr[]={3,6,11,7};
    int n=4;
    int start=1,end=11;
    int ans=0;
    int h=8;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<n;i++){
          total_time+=arr[i]/mid;
          if(arr[i]%mid!=0){
            total_time++;
          }}
          if(total_time>h){
            start=mid+1;
          }
          else{
            ans=mid;
            end=mid-1;
          }



        }
        cout<<ans;
    }
