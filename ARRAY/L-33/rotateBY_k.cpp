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
  int n;
  cin>>n;
  n=n%4;
  for(int k=0;k<n;k++){
for(int i=0;i<3;i++){
    for(int j=i+1;j<4;j++){
        swap(matrix[i][j],matrix[j][i]);
    }}
    for(int i=0;i<4;i++){
        int start=0,end=3;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }}
    cout<<"rotated matrix"<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}
