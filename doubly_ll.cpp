#include<iostream>
using namespace std;
struct x{
    int data;
    x *prev=NULL;
    x *next=NULL;
};
x *tail=NULL;
x *insertion(x *ptr){
    x *p=ptr;
    
    int data;
    cout<<"Enter your data you want to insert::";
    cin>>data;
    cout<<endl;
    x *newnode=new x;
    newnode->data=data;
    if(ptr==NULL){
        ptr=tail=newnode;
        ptr->prev=newnode;
        tail->next=NULL;
       //return ptr;
    }
        else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        tail->next=NULL;
        return ptr;
        }
}
void traversal(x *ptr){
    while(ptr!=NULL){
        cout<<"Elements are::"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
x *insertion_beg(x* ptr){
    x *p=ptr;
    x *newnode=new x;
    int data;
    cout<<"Enter your data::";
    cin>>data;
    cout<<endl;
    newnode->data=data;
    newnode->prev=NULL;
    if(ptr==NULL){
        newnode->next=NULL;
        ptr=newnode;
        return ptr;
    }
    newnode->next=ptr;
    ptr=newnode;
    return ptr;
}
x *insertion_end(x *ptr){
    x *p=ptr;
    x *newnode=new x;
    int data;
    cout<<"Enter your data::";
    cin>>data;
    cout<<endl;
    newnode->data=data;
    newnode->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }
    newnode->prev=p;
    p->next=newnode;
    return ptr;
}
x *insertion_bet(x *ptr){
    x *p=ptr;
    x *newnode=new x;
    int positon,data,i=0;
    cout<<"Enter your position and data::";
    cin>>positon>>data;
    cout<<endl;
    if(positon==0){
        newnode->data=data;
        ptr->prev=newnode;
        newnode->next=ptr;
        newnode->prev=NULL;
        ptr=newnode;
        return ptr;
    }
    else{
        while(i!=positon-1){
            p=p->next;
            i++;
        }
        newnode->data=data;
        newnode->prev=p;
        newnode->next=p->next;
        p->next=newnode;
        return ptr;
    }
}
x *deletion_bgiv(x *ptr){
     x *p=ptr;
     int n=1,i=0;
     cout<<"Ente your positionL::";
     cin>>n;
     cout<<endl;
     while(i!=n){
        p=p->next;
        i++;
     }

     x *q=p->prev;
     x *pp=p->prev->prev;
     p->prev=p->prev->prev;
     pp->next=p;
     free(q);
     return ptr;
}
int main()
{
    int n;
    x *head=NULL;  
    cout<<"Enter no of nodes you want to insert::";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        head=insertion(head);
    }
    traversal(head);
    int ch;
    cout<<"Enter your choice::";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
    case 1:
        head=insertion_beg(head);
        cout<<"LL after insertion at beginning::"<<endl;
        traversal(head);
        break;
    
    case 2:
        head=insertion_end(head);
        cout<<"LL after insertion at end::"<<endl;
        traversal(head);
    case 3:
        head=insertion_bet(head);
        cout<<"LL after insertion at given node::"<<endl;
        traversal(head);
    case 4:
        head=deletion_bgiv(head);
        cout<<"LL after deletion before given node::"<<endl;
        traversal(head);
    default:
        break;
    }

   return 0;
}