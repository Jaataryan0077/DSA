#include<iostream>
using namespace std;
void rev(string &s,int start,int end){
if(start>=end){
    return;
}
char c=s[start];
s[start]=s[end];
s[end]=c;

rev(s,start+1,end-1);
}

int main(){
    string s="aryan";
    rev(s,0,4);
    cout<<s<<endl;
}
