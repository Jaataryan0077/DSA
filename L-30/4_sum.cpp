#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={
        1,5,1,0,6,0};
        
    int X=7;
    int ans=0;
    int n=6;sort(arr,arr+n);
    for(int i=0;i<n-3;i++)
    {            
        if(i>0 && arr[i]==arr[i-1]) continue;
     for(int j=i+1;j<n-2;j++)
     {
          if(j>i+1 && arr[j]==arr[j-1]) continue;
 
        int start=j+1,end=n-1;
        ans=X-arr[i]-arr[j];
        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
            { 
                 cout<<arr[i]<<" ";
                cout<<arr[j]<<" ";
                cout<<arr[start]<<" ";
                cout<<arr[end]<<endl;
                start++,end--;
                
                    // Skip duplicate start
                    while(start<end && arr[start]==arr[start-1])
                        start++;

                    // Skip duplicate end
                    while(start<end && arr[end]==arr[end+1])
                        end--;
            }
              
            
            else
            {
                if(arr[start]+arr[end]>ans)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
     }
    }
}

