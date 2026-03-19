#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="abcdecbeadf";
    int first=0,second=0,len=0;
    int startindex=0;
    vector<int>count(256,0);
    while(second<s.size()){
        while(count[s[second]]){
            count[s[first]]=0;
            first++;
            
        }
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
        startindex=first;
        

    }
    cout<<len<<endl;
    cout<<s.substr(startindex,len);
    
}