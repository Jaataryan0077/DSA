#include<iostream>
using namespace std;
int main(){
    int arr1[1][2]={2,3};
    int arr2[1][2]={5,6};
    int ans[1][2];
    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
            ans[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<1;i++){for(int j=0;j<2;j++){
        cout<<ans[i][j] <<" ";
    }}

}