#include<iostream>
#include<vector>
using namespace std;
int main()
{string num1="23568";
   string num2="945";
    int carry=0;
    string ans;
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    while(index2>=0)
    {
        int sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
        index2--;
    }
    while(index1>=0){
        int sum=num1[index1]-'0'+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
    }
    if(carry){
        ans+='1';
    }
 
    reverse(ans.begin(),ans.end());

       cout<<ans;
}
