#include<iostream>
using namespace std;
int main(){
   /*  string s="ARYAN";
    
    int start=0,end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s<<endl;
int size=0;
    while(s[size]!='\0'){size++;}
    cout<<size;
 */
    string s2="artyyan";
    int start=0,end=s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<s2<<" not a palindrom";
            return 0;
        }
        start++,end--;
    }
    cout<<"is a palindrome";


}