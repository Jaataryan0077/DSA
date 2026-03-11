//circular pattern matching
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s="cdeabroab";
    string n ="abcde";
 
    s+=s;
    vector<int>lfs(n.size(),0);
    int pre=0,suf=1;
    while(suf<n.size()){
        if(n[pre]==n[suf]){
            lfs[suf]=pre+1;
            pre++,suf++;
        }
        else{
            if(pre==0){
                lfs[suf]=0;
                suf++;
            }
            else{
                pre=lfs[pre-1];
            }
        }
    }
    int first=0,second=0;
    while(second<n.size() && first<s.size()){
        if(n[second]==s[first]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lfs[second-1];
            }
        }
    }
    if(second==n.size()){
        cout<<0;
    }
    else{
        cout<<-1;
    }
}