#include<iostream>
using namespace std;
 void toh(int n,int s,int h,int d)
 {
    if(n==1)
    {
        cout<<"move the disk"<<n<<"from"<<s<<"to"<<d<<endl;
        return ;
    }
    toh(n-1,s,d,h);
    cout<<"move the disk"<<n<<"from"<<s<<"to"<<d<<endl;
    toh(n-1,h,s,d);
 }
 int main(){
    int n=3;
    int s=1,h=2,d=3;
    toh(n,s,h,d);
    return 0;
 }