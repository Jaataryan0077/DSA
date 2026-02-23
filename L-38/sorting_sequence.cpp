#include<iostream>
#include<vector>
using namespace std;
int main()
{
string s="is2 sentence4 this1 a3";
vector<string>ans(10);
string temp;
int count=0;
int index=0;
for(int i=0;i<s.size();i++){
    if(s[index]==' '){
        int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;
        
    }
    else{
        temp+=s[index];
        index++;

    }}
     int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
       string result;
        for(int i=1;i<=count;i++){
            temp+=ans[i];
            temp+=' ';
            temp.pop_back();
        }
        cout<<temp;

}
