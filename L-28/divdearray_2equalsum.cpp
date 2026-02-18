#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,-2,5,8,20,-10,8};
int ans=0;
int n=8;
int sum=0;
bool found=0;
int prefix=0;
for(int i=0;i<n;i++){
     sum+=arr[i];
}
for(int i=0;i<n-1;i++){
    prefix+=arr[i];
    ans=sum-prefix;




if(ans==prefix){
    cout<<ans<<"   ";
    found=1;
    break;
}
} 
if(!found){
cout<<"not found";}

}