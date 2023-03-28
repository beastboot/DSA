#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
x * create_list(x *ptr){
    int data;
    cout<<"Enter your data::";
    cin>>data;
    cout<<endl;
    x *newnode=new x;
    newnode->data=data;
    newnode->next=NULL;
    x *p;
    if(ptr==NULL){
        ptr=newnode;
        p=ptr;
        return ptr;
    }
    else{
        p->next=newnode;
        p=newnode;
        return ptr;

    }
}
void traversal(x *ptr){
    while(ptr!=NULL){
        cout<<"Elements are::"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
x *insertion_first(x *ptr){
    int data;
    cout<<"Enter your data::";
    cin>>data;
    cout<<endl;
    x *newnode=new x;
    newnode->data=data;
    if(ptr==NULL){
        cout<<"Overflow"<<endl;
    }
    else{
        newnode->next=ptr;
        ptr=newnode;
        return ptr;

    }
}
x *insertion_given(x *p){
    x *ptr=p;
    int index,data;
    int i=0;
    cout<<"Enter node at which you want to insert::";
    cin>>index;
    cout<<endl;
    cout<<"Enter your data::";
    cin>>data;
    cout<<endl;
    x *newnode=new x;
    newnode->data=data;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    return p;
}
x *insertion_last(x *p){
    x *ptr=p;
    x *newnode=new x;
    int data;
    cout<<"Enter your data you want to insert at last::";
    cin>>data;
    cout<<endl;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    newnode->data=data;
    ptr->next=newnode;
    newnode->next=NULL;
    return p;

}
x *deletion_bet(x *ptr){
    x *p=ptr;
    x *q=ptr->next;
    int index,i=0;
    cout<<"Enter the node which you want to delete::";
    cin>>index;
    cout<<endl;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return ptr;
}
int main()
{
     x *head=NULL;
    int n;
    cout<<"Enter the no of nodes you want to create::";
    cin>>n;
    cout<<endl;
   
    for(int i=0;i<n;i++){
        head=create_list(head);
    }
    traversal(head);
    int ch;
    cout<<"Enter your choice::";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
    case 1:
        head=insertion_first(head);
        traversal(head);
        break;
    case 2:
        head=insertion_given(head);
        traversal(head);
        break;
    case 3:
        head=insertion_last(head);
        traversal(head);
        break;
    case 4:
        head=deletion_bet(head);
        traversal(head);
        break;
    
    default:
        break;
    }
   return 0;
}