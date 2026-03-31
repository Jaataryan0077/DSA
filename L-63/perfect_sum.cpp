#include<iostream>
using namespace std;
int perfect(int arr[],int index,int n,int sum){
    if(index==n)
     return sum==0;

    
    return perfect(arr,index+1,n,sum) + perfect(arr,index+1,n,sum-arr[index]);
}
int main(){
    int arr[]={2,3,5,6,1,2};
    int sum=8;
    cout<<perfect(arr,0,6,sum)<<endl;
}
