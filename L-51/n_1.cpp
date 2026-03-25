#include<iostream>
using namespace std;
//printing 1 to n

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

//printing 1 to n ,,only even no.
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
