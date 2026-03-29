#include<iostream>
using namespace std;
void subset(int arr[],int index,int n,int sum,vector<int>&ans,vector<vector<int>>&sub,vector<int>&temp){
if(index==n){
ans.push_back(sum);
sub.push_back(temp); 
    return;
}
subset(arr,index+1,n,sum,ans,sub,temp);
temp.push_back(arr[index]);

subset(arr,index+1,n,sum+arr[index],ans,sub,temp);
temp.pop_back(); 

}
int main(){
    int arr[]={3,4,5};
   int sum=0;
   vector<int>ans;
   vector<int>temp;
   vector<vector<int>>sub;
    subset(arr,0,3,sum,ans,sub,temp);
    for(int i=0;i<ans.size();i++){
        for(int j = 0; j < sub[i].size(); j++){
    cout << sub[i][j] << " ";
}
cout<<"->"<<ans[i]<<endl;
    }
   

}
