#include<iostream>
using namespace std;
int main(){
  
    /*cout<<"rows"<<matrix.size();
    cout<<endl;
    cout<<"col"<<matrix[0].size(); */
    int n,m;
    cin>>n>>m; 
    vector<vector<int>>matrix(n,vector<int>(m,1));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];

        
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";}
            cout<<endl;
            
        

}}