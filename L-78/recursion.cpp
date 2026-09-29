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
//     int arr[]={1,2,3,4};
// head=ll(arr,0,4);

// node *temp=head;
// while(temp){
//     cout<<temp->data<<"->";
//     temp=temp->next;
// }


/*recursion for beginning*/
 
// node *ll(int arr[],int index,int size,node *prev){
//     if(index==size){
//         return prev;
//     }
//     node *temp=new node(arr[index]);
//    temp->next=prev;
//     return ll(arr,index+1,size,temp);
//  }
// int main(){
//     node*head=NULL;
// int arr[]={1,2,3,4};
// head=ll(arr,0,4,head);
// node *temp=head;
// while(temp){
// cout<<temp->data<<"->";
// temp=temp->next;
// }}



/* recursion for middle */
int main(){
    node *head=NULL;
    int arr[]={1,2,3,4};
    head=ll(arr,0,4);
    int x=3;
    int value=30;
    node *temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    node *temp2=new node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
}