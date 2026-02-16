#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,67,90};
    int start=90,end=203;
    int ans;
    int n=4;
    int M=2;
  
    while(start<=end){
        int mid=start+(end-start)/2;
          int page=0,count=1;
          for(int i=0;i<n;i++){
         page+=arr[i];
         if(page>mid){
            count+=1;
            page=arr[i];
         }

         if(count<=M){
            ans=mid;
             end=mid-1;
         }
         else{start=mid+1;
           
         }
}
    }
cout<<ans;
}