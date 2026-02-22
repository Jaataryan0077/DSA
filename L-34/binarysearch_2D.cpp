#include<iostream>
using namespace std;

int main() {

    int matrix[4][4] = {
        {1, 2, 3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
cout<<"original matrix"<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
  /*   int x=11; 
for(int i=0;i<4;i++){
    if(matrix[i][0]<=x && matrix[i][3]>=x){

    }
    int start=0,end=3;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(matrix[i][mid]==x){
            cout<<i<<" "<< mid;
            break;
        }
        else{
            if(matrix[i][mid]<x){start=mid+1;

            }
            else{end=mid-1;}
        }
       } */ 



       //optimize code
       int start=0,end=15;
       int x=12;
       while(start<=end){
        int mid=(start+end)/2;
        int row_index=mid/4;
        int col_index=mid%4;
        if(matrix[row_index][col_index]==x){
            cout<<row_index<<" "<< col_index;
            break;
        }
        else{
            if(matrix[row_index][col_index]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        

       }
}






