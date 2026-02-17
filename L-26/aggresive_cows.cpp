#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    int cows(int n,int k,vector<int>&stall){
        int start=1,end,mid,ans=0;
        sort(stall.begin(),stall.end());
        end=stall[n-1]-stall[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1,pos=stall[0];
            for(int i=1;i<n;i++){
                if(pos+mid<stall[i]){
                    count++;
                    pos=stall[i];

                }
            }
            if(count<=k){
                end=mid-1;

            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
return ans;
    }
};
int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int n = stalls.size();
    int k = 3;
solution obj;

    cout << obj.cows(n, k, stalls);

    return 0;
}