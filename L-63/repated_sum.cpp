#include<iostream>
using namespace std;
void subsum(int arr[],int index,int n,int sum,vector<int>temp){
    if(sum==0) {
    for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    return ;}
    if(index==n || sum<0)
    return ;

  subsum(arr,index+1,n,sum,temp);
    temp.push_back(arr[index]);
     subsum(arr,index,n,sum-arr[index],temp);
    temp.pop_back();

   
}
int main(){
    int arr[]={2,4,3};
    int sum=6;
    vector<int>temp;
    subsum(arr,0,3,sum,temp);
}
