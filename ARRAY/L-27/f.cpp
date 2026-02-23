#include<iostream>
#include<vector>
using namespace std;
int main(){
//creating vector
/* vector<int>v;
vector<int>v1(5,1);
v.push_back(2);
v.push_back(4);
v.push_back(5);
//size and capacity
cout<<"size = "<<v.size()<<endl;
cout<<"capacity = "<<v.capacity();
//update value
v[2]=55;
 */
//deleting value from vector
vector<int>v3;
v3.push_back(2);
v3.push_back(3);
v3.push_back(4);
v3.push_back(5);
v3.pop_back();
cout<<v3.front()<<" ";
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" "<<endl;

}
v3.insert(v3.begin()+1,40);

for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" "<<endl;

}
sort(v3.begin(),v3.end());
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
    cout<<endl;

}
sort(v3.begin(),v3.end(),greater<int>());
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";

}


}