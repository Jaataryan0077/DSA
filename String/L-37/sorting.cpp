#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="eabcabd";
    vector<int>ans(26,0);
    for(int i=0;i<s.size();i++){
        ans[s[i]-'a']++;
    }string s2;
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(ans[i])
       { s2+=c;
        ans[i]--;
        
            
        }

    }
    cout<<s2;
}