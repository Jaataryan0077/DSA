// quick sort

#include<iostream>
using namespace std;
int pos(int arr[],int start,int end){
    int posi=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[posi]);
            posi++;
        }
    }
    return posi-1;

}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=pos(arr,start,end);
    quicksort(arr,start,pivot-1);
     quicksort(arr,pivot+1,end);
}
int main(){
    int arr[]={2,4,65,63,2,646,46,463};
    quicksort(arr,0,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
