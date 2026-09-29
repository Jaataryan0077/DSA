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

/*recursion for end*/


node * ll(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=ll(arr,index+1,size);
    return temp;
}
// int main(){
//     node *head=NULL;
//     int arr[]={2,3,4,5};
//     head=ll(arr,0,4);
//    head=NULL;
//     if(head!=NULL){
//         node *temp=head;
//         head=head->next;
//         delete temp;
//     }
//     while(head){
//         cout<<head->data<<"->";
//         head=head->next;
//     }
// }


/* for all edge cases */

int main(){
    node *head=NULL;
    int arr[]={1,2,3,4};
    head=ll(arr,0,4);
    if(head!=NULL){
        //only one node is present
        if(head->next==NULL){
            node *temp=head;
            delete temp;
            head=NULL;
        }
        //more than 1 node is present
        else{
            node *curr=head;
            node *prev=NULL;
             
            //curr->next is not null
            while(curr->next!=NULL){
                    prev=curr;
                curr=curr->next;
            
            }
            prev->next=curr->next;
            delete curr;
        }

    }
    node *temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}