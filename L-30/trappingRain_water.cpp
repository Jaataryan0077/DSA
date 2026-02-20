#include<iostream>
using namespace std;
int main(){
   
int leftmax=0,rightmax=0,index=0,water=0;
int height[]={4,2,0,5,2,6,2,3};
int maxheight=height[0];
int n=8;
//MAX height find krega
for(int i=1;i<n;i++){
    if(maxheight<height[i]){
        maxheight=height[i];
        index=i;

    }}
    //left part
    for(int i=0;i<index;i++){
        if(leftmax>height[i]){
            water+=leftmax-height[i];

        }
        else{
            leftmax=height[i];
        }
    }
//right part
  for(int i=n-1;i>index;i--){
        if(rightmax>height[i]){
            water+=rightmax-height[i];

        }
        else{
            rightmax=height[i];
        }
    }
    cout<<water<<" ";
}

