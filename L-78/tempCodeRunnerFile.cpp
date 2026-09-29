
node * ll(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=ll(arr,index+1,size);
    return temp;
}