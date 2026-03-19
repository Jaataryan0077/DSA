#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
  /*   //print address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;

//print the address of second element
cout<<arr+1<<endl;
cout<<&arr[1]<<endl;

//print the value of 0 index;
cout<<arr[0]<<endl;
cout<<*arr+0<<endl;
cout<<*ptr<<endl;

//saare address
for(int i=0;i<5;i++)
{
    cout<<arr+i<<endl;;
}
//values print
for(int i=0;i<5;i++)
{
    cout<<*arr+i<<endl;;
} */
//print values using ptr
for(int i=0;i<5;i++){
    cout<<ptr[i]<<" ";

}cout<<endl;
/* for(int i=0;i<5;i++){
    cout<<*ptr<<" ";
    ptr++;

} */
ptr=ptr+3;
cout<<*ptr<<endl;
ptr=ptr-2;
cout<<*ptr<<endl;



}