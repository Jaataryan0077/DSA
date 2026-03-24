#include<iostream>
using namespace std;
int main(){
    int l,b,h;
    cin>>l>>b>>h;
    int ***ptr=new int **[l];
    for(int i=0;i<l;i++){
         ptr[i]=new int*[b];
        for(int j=0;j<b;j++){
            ptr[i][j]=new int [h];
        }
    }
}