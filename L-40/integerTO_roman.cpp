#include<iostream>
#include<vector>
using namespace std;

    string toroman(int num)
    {
        int values[]={1000,900,500,400,100,50,40,10,9,5,4,1};
        string symbols[]={"M","CM","D","CD","C","L","XC","X","IX","V","IV","I"};
        string ans=" ";
        for(int i=0;i<12;i++){
            while(num>=values[i]){

                ans+=symbols[i];
                num-=values[i];
            }
        }return ans;
    }
    int main()
    {
        int num=1994
        ;
        cout<<toroman(num);

    }
    