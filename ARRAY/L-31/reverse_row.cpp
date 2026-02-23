#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[3][3]={
       1, 2,3,4,5,6,7,8,9
        
    };
    for(int i=0;i<3;i++){
        int start=0;int end=2;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }

 
}