#include<iostream>
using namespace std;
// pass by pointer

/* void swapping(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main(){
    int f=10,s=20;
    swapping(&f,&s);
    cout<<f<<" "<<s;
} */

//pass by reference

void swapping(int &p1,int &p2){
    int temp=p1;
    p1=p2;
    p2=temp;

}
int main(){
    int f=10,s=20;
    swapping(f,s);
    cout<<f<<" "<<s;
}