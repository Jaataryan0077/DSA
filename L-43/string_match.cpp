#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    string big="abcdaabceaabceaabdop";
    string small="aabceaabdo";
    vector<int>lps(small.size(),0);
      int pre=0,suf=1;
    while(suf<small.size()){
        if(small[pre]==small[suf]){
            lps[suf]=pre+1;
            pre++,suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                pre=lps[pre-1];
            }
        }

    }
    int first=0,second=0;
    while(second<small.size()&&first<big.size())
    {
        if(small[second]==big[first]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second==small.size()){
        cout<<first-second;
    }
    else{
        cout<<-1;
    }
    
}