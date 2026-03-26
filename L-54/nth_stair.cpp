#include<iostream>
using namespace std;
int totalways(int n){
    if(n<=1){
        return 1;}
return totalways(n-1)+totalways(n-2);
}
int main()
{
    cout<<totalways(5);
}