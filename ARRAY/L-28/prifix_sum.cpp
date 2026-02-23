#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int prefix[100];
    int sufix[100];
    prefix[0]=arr[0];
    sufix[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        sufix[i]=sufix[i+1]+arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<sufix[i]<<" ";
    }
}