#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N=3;
    vector<int>ans(1,1);
    while(N>1){
        int carry=0;
        int res;
        int size=ans.size();
        for(int i=0;i<size;i++){
           ans[i]=ans[i]*N+carry;
            carry=res/10;
       
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        N--;
    }
    reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
    cout<<ans[i];}
}