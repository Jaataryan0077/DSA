#include<iostream>
using namespace std;

// recursive approach
void fun(int n){
    //base case
    if(n==0){
        cout<<"happy birthday";
        return;
    }
    cout<<n<<"left"<<endl;
    fun(n-1);
}


int main(){
/*    
//iterative approach

int n=5;
    for(int i=n;i>0;i--){
        cout<<i<<"day left";
        cout<<endl;
    }
    cout<<"happy birthday"; */
    fun(3);
}