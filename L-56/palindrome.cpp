// NAMAN -> NAMAN on reversing
#include<iostream>
using namespace std;
bool pal(string s,int start,int end){
    if(start>=end){
        return 1;
    }
    if(s[start]!=s[end]){
    return 0;}
else
    return pal(s,start+1,end-1);
}
int main(){
    string s="naman";
    cout<<pal(s,0,4)<<endl;
}