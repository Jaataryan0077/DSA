#include<iostream>
using namespace std;
int main(){
int arr[]={2,3,3,3,3,4,5};
int n=8;
int first=-1;
int key=3;int mid;int start=0,end=n-1;
while(start<=end){
     mid=start+ (end-start)/2;
    if(arr[mid]==key){
     first=mid;
    end=mid-1;
}
    else if(arr[mid]<key){
        start=mid+1;
    }
    else 
    end=mid-1;

}
cout<<first;



}

