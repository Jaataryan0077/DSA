#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[2][3]={
        2,3,4,
        5,6,7
    };

    int sum=INT_MIN;
    int index=-1;

    for(int i=0;i<2;i++)
    {   
        int total=0;

        for(int j=0;j<3;j++)
        {
            total+=arr[i][j];
        }

        if(sum < total)
        {
            sum = total;
            index = i;
        }
    }

    cout<<index<<" ";
}