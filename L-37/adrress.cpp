#include<iostream>
using namespace std;
int main(){
    string s="255.100.113";
    
    int index=0;
     string ans="";
    while(index<s.size()){
        if(s[index]=='.'){
            ans+="[.]";
        }
        else{
            ans+=s[index];

        }            index++;
    }
    cout<<ans<<endl;
}