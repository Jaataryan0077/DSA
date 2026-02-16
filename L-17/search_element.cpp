 #include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,6,5};
    int x=5;
    int index=-1;
    for(int i=0;i<5;i++)
    {
    if(arr[i]==x)
    {
    index= i;
    break;}
    
}
  
cout<<"index="<<index;
return 0;
 
}