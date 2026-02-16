#include<iostream>
#include<climits> 
using namespace std;
int main()
{int n=6;
int arr[]={1,2,3,4,5,6};
int temp=arr[n-1];
for(int i=4;i>=0;i--){
    arr[i+1]=arr[i];
}

arr[0]=temp;

for(int i=0;i<n;i++)
cout<<arr[i];



return 0;

}

