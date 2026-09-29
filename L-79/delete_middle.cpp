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

node * ll(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=ll(arr,index+1,size);
    return temp;
}

int main(){
    int x;
    cin>>x;
    node*head=NULL;
    int arr[]={1,2,3,4};
    head=ll(arr,0,4);
    if(x==1){
        node *temp=head;
        head=head->next;
        delete temp;
     
        
    }
    else{
    x--;
    node *curr=head;
    node *prev=NULL;
    while ((x--))
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
}
    node*temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}