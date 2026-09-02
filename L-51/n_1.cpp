#include<iostream>
using namespace std;
//printing n to 1

/* void fun(int n){
if(n==1){
    cout<<1;
    return;
}
cout<<n<<endl;
    fun(n-1);
}
int main(){
   
    fun(5);
} */

//printing n to 1 ,,only odd no.
void print(int n){
    if(n<0){
        cout<<0;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}

int main(){
    print(5);
}
