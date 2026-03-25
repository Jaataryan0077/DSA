#include<iostream>
using namespace std;

/* 
//by two arguments or parameters
void print(int num,int n){
    if(num==n){
        cout<<num;
        return;
    }
    cout<<num<<endl;
    print(num+1,n); 
}
int main(){
    print(1,10);
} */

/* //by single argument

void print(int num){
    if(num==1){
        cout<<1;
        return;
    }
    print(num-1);
    cout<<num<<endl;
}
int main(){
    print(10);
}
 */


 //even no. from 1 to  n
 void printeven(int n){
    if(n==2){
        cout<<2<<endl;
        return;
    }
    printeven(n-2);
    cout<<n<<endl;
 }
 int main(){
    int n=11;
    if(n%2==1){
        n--;
    }
    printeven(n);
 }