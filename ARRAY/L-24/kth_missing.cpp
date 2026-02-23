#include<iostream>
using namespace std;
int main(){
    int n=6;
int start=0,end=n-1;
int ans=-1;
int k;
cin>>k;
int arr[]{2,3,4,7,11,12};
while(start<=end){
    int mid=end+(start-end)/2;
    if(arr[mid]-mid+1>k){
        ans=mid;
      end=mid-1;  

    }
    else
    start=mid+1;
}
cout<<ans+k;
}