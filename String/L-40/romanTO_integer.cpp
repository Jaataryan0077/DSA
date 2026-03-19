#include<iostream>
#include<vector>
using namespace std;
int num(char c){
    if(c=='I'){
        return 1;
    }
      if(c=='V'){
        return 5;
    }
      if(c=='X'){
        return 10;
    }  if(c=='L'){
        return 50;
    }
    if(c=='C'){
        return 100;
    }
    if(c=='D'){
        return 500;
    }if(c=='M'){
        return 1000;
    }
    return 0;
}
int main(){
    string s="XI";
    int i=0,sum=0;
    while(i<s.size()-1){
        if(num(s[i])<num(s[i+1])){
           sum-=num(s[i]);
           i++;
        }
        else{
            sum+=num(s[i]);
            i++;
        }
        
    }
    sum+=num(s[s.size()-1]);
    cout<<sum;


}