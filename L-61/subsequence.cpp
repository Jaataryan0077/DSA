/* #include<iostream>
using namespace std;
void sub(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    sub(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    sub(arr,index+1,n,ans,temp);
}
int main(){
int arr[]={1,2,3};
vector<vector<int>>ans;
vector<int>temp;
sub(arr,0,3,ans,temp);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;

}



} */

//for strind]g

#include<iostream>
using namespace std;
void sub(string s,int index,int n,vector<string>&ans,string temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    sub(s,index+1,n,ans,temp);
    temp.push_back(s[index]);
    sub(s,index+1,n,ans,temp);
}
int main(){
string s="abc";
vector<string>ans;
string temp;
sub(s,0,s.size(),ans,temp);
for(int i=0;i<ans.size();i++){cout<<ans[i]<<endl;
    

}



}