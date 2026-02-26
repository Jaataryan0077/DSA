#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    string s="AABBCBBAC";
    vector<int>count(256,0);

    int first=0, second=0;
    int len=INT_MAX;
    int diff=0;

    // Step 1: count total distinct characters
    while(first<s.size()){
        if(count[s[first]]==0)
            diff++;
        count[s[first]]++;
        first++;
    }

    // reset for sliding window
    for(int i=0;i<256;i++)
        count[i]=0;

    first=0;

    // Step 2: sliding window
    while(second<s.size()){

        while(diff && second<s.size()){
            if(count[s[second]]==0)
                diff--;

            count[s[second]]++;
            second++;
        }

        len=min(len,second-first);

        while(diff==0){

            len=min(len,second-first);

            count[s[first]]--;
            if(count[s[first]]==0)
                diff++;

            first++;
        }
    }

    cout<<len;
}