#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="LEetCOde";
    vector<int>lower(26,0),upper(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
        lower[s[i]-'a']++;
        s[i]='#';}
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
        upper[s[i]-'A']++;
        s[i]='#';}


}
//sort the vowel
string ans;
for(int i=0;i<26;i++){
    char c='A'+i;
    while(upper[i]){
        ans+=c;
        upper[i]--;
    }}
for(int i=0;i<26;i++){
    char c='a'+i;
    while(lower[i]){
        ans+=c;
        lower[i]--;
    }
}

//insert values
int second=0;
for(int i=0;i<s.size();i++){

    if(s[i]=='#'){
    s[i]=ans[second];
    second++;}

}
cout<<s;

}