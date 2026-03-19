#include<iostream>
#include<vector>
using namespace std;
int main(){
string s="the quick brown fox jumps over the lazy dog";
vector<bool>ans(26,0);
for(int i=0;i<s.size();i++){  if(s[i] >= 'a' && s[i] <= 'z')
    ans[s[i]-'a']=1;
}
bool pangram=true;
for(int i=0;i<26;i++)
{
    if(ans[i]==0){
        
        pangram=false;

        break;
        
    }}
    
if(pangram){
    cout<<" pangram";
}
else{
    cout<<"not pangram";
}}

