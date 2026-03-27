  #include<iostream>
  using namespace std;
 
   void merge(int arr[], int mid,int start, int end){
        vector<int>temp(end-start+1);
        int left=start,right=mid+1,index=0;
        while(left<=mid &&right<=end){
            if(arr[left]<=arr[right]){
                temp[index]=arr[left];
                index++,left++;
            }
            else{
                temp[index]=arr[right];
                index++,right++;
            }

        }
        while(left<=mid){
            temp[index]=arr[left];
            left++,index++;
        }
        while(right<=end){
            temp[index]=arr[right];
            index++,right++;
        }
        index=0;
        while(start<=end){
            arr[start]=temp[index];
            start++,index++;
        }


    }
   void mergesort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
merge(arr,mid,start,end);}
  int main(){
    int arr[]={6,5,4,2,21,2};
    mergesort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
  }