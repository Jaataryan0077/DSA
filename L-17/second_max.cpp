#include<iostream>
#include<climits> 
using namespace std;
int main()
{int arr[]={2,3,4,5,1};
int ans=INT_MIN;
for(int i=0;i<5;i++)
{
if(arr[i]>ans)
{
ans=arr[i];
}
}
int second=INT_MIN;
for(int i=0;i<5;i++)
if(ans!=arr[i]){
    second=max(second,arr[i]);
}

cout<<second;

}