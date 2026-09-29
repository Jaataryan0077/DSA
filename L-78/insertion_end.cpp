#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
 node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    int arr[]={2,3,4,5};
    node *head ,*tail;
    tail=head=NULL;
    for(int i=0;i<4;i++){
        //list is empty
        if(head==NULL){
         head=new node(arr[i]);
         tail=head;}
        //exist krti h
        else{
           tail->next=new node(arr[i]);
           tail=tail->next;
          
        }
    }

    node *temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}