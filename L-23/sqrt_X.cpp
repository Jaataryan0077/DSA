#include<iostream>
using namespace std;
int main(){
    int x=9;
    int start=0,end=x;
    int ans=0;

while(start<=end)
{
    int mid=start+(end-start)/2;
    if(mid*mid==x){
    ans=mid;
    break;}
    else if(mid*mid<x)
    {
    ans=mid;
    start=mid+1;}

    else
    end=mid-1;
}
cout<<ans;






}
