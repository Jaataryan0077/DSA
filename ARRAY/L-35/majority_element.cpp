#include<iostream>
using namespace std;
int main(){
    int arr[]={3,3,3,3,3,2,2,2};
    int n=8;
    int candidate,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            candidate=arr[i];

        }
        else{
            if(candidate==arr[i])
            {
                count++;
            }
            else{count--;}

        }
    }
        //verify
         count=0;
        for(int i=0;i<n;i++)
{
    if(arr[i]==candidate)
    {
        count++;

    }}
    
    
        if(count>n/2)
        {
            cout<<candidate;
        }
        else{

            cout<<"not found";
        }
    }

  


