#include<iostream>
#include<climits> 
using namespace std;
int main()

{
int arr[]={4,5,3,9};
int ans=INT_MAX;
for(int i=0;i<4;i++)
{
    if(arr[i]<ans)
    ans=arr[i];
}
    cout<<ans;
} 

