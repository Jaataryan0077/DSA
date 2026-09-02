#include<iostream>
using namespace std;
int perfect(int arr[],int index,int n,int sum){
    if(index==n )
{return sum==0;}     
    
    return perfect(arr,index+1,n,sum) + perfect(arr,index+1,n,sum-arr[index]);
}
int main(){
    int arr[]={1,0};
    int sum=1;
    cout<<perfect(arr,0,2 ,sum)<<endl;
}
