#include<iostream>
#include<climits> 
using namespace std;
int main(){
    int N=6;
    int arr[]={1,2,4,5,6};
    int sum=0;
    for(int i=0;i<5;i++){
    sum=sum+arr[i];
    }
int ans=N*(N+1)/2;
cout<<ans-sum;
}