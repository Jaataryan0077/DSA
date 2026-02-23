#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,-5,8,-12,7,6,-2};
    int n=8;
    int Maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<n;i++){
    prefix+=arr[i];
    Maxi=max(Maxi,prefix);
    if(prefix<0){
        prefix=0;
    }
    }
    cout<<Maxi;
}
