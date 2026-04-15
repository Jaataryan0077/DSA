#include<iostream>
#include<vector>
using namespace std;
int winner(vector<bool>&person,int n,int index,int k,int person_left)
{
    if(person_left==1){
        for(int i=0;i<n;i++){
            if(person[i]==0){
                return i;
            }
        }
    }
 int kill=(k-1)%person_left;
while(kill--){
 index=(index+1)%n;
while(person[index]==1){
    index=(index+1)%n;
}
}
person[index]=1;

while(person[index]==1){
    index=(index+1)%n;

}
return winner(person,n,index,k,person_left-1);
}
int main(){
    int n=5;
    vector<bool>person(n,0);
    cout<<winner(person,5,0,2,n)+1;
    return 0;
}