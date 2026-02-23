#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={4,3,2,1,2,7,6};
    int n=7;
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
 /* 
    for(int i=0;i<n;i++){
        if(count[i]==0){
            int missing=count[i];
            cout<<i+1;
            break;
        }
    
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        if(count[i]==2){
            int repeated =count[i];
            cout<<i+1;
            break;
        }
    
    } */



    //optimized code

    
}