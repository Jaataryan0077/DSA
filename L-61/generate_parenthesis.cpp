#include<iostream>
#include<vector>
using namespace std;
void para(int n,int left,int right ,vector<string>&ans,string temp){
    if(left+right==2*n){
        ans.push_back(temp);
     
    }
if(left<n){
    temp.push_back('(');
    para(n,left+1,right,ans,temp);
    temp.pop_back();
}
if(right<left){
    temp.push_back(')');
    para(n,left,right+1,ans,temp);
}
}
int main(){
    int n=3;
    string temp;
    vector<string>ans;

    para(n,0,0,ans,temp);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}

}