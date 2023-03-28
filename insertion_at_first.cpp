#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
    x(int a){
        data=a;
        next=NULL;
    }
};

void traversal(x *nptr){
    while(nptr!=NULL){
        cout<<"elements::"<<nptr->data<<endl;
        nptr=nptr->next;
    }
}
void insertion(x *nptr){
    x *newnode;
    int s;
    cout<<"Enter the number::";
    cin>>s;
    cout<<endl;
    newnode=new x(s);
    newnode->next=nptr;
    nptr=newnode;
    traversal(newnode);
}
void insertion_end(x *p){
    x *newnode;
    x *nptr=p;
    newnode=new x(100);
    while(nptr->next!=NULL){
        nptr=nptr->next;
    }
    nptr->next=newnode;
    newnode->next=NULL;
    nptr=newnode;
    
    traversal(p);
}
void insertion_bet(x *p){
    x *nptr=p;
    x *newnode=new x(40);
    int i=0;
    int index=2;
        while(i!=index-1){
            nptr=nptr->next;
            i++;
        }
        newnode->next=nptr->next;
        nptr->next=newnode;
        traversal(p);
    }
void deletion_first(x *p){
    x *nptr;
    nptr=p->next;
    free(p);
    traversal(nptr);

}
void deletion_bet(x *ptr){
    x *p=ptr;
    x *q=ptr->next;
    int i=0;
    int index=2;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
p->next=q->next;
free(q);
traversal(ptr);
}
void deletion_last(x *ptr){
    x *p=ptr;
    x *q=ptr->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    traversal(ptr);

}
void searching(x *ptr){
    int value,c=0;
    cout<<"Enter the value::";
    cin>>value;
    cout<<endl;
    while(ptr->next!=NULL){
        if(ptr->data==value){
          c=c+1;
        }
        else{
            ptr=ptr->next;
        }
    }
    if(c>0){
        cout<<"Value Found Successfully"<<endl;
    }
    else cout<<"Not Found"<<endl;
}

int main()
{
    struct x *head;
    head=new x(20);
    head->next=new x(36);
    head->next->next=new x(32);
    //insertion(head);
    //traversal(head);
    int ch;
    cout<<"Enter 1 for insertion at beg:Enter 2 for insertion at end::";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
    case 1:
        insertion(head);
        break;
    case 2:
        insertion_end(head);
        break;
    case 3:
        insertion_bet(head);
        break;
    case 4:
        deletion_first(head);
        break;
    case 5:
        deletion_bet(head);
        break;
    case 6:
        deletion_last(head);
        break;
    case 7:
         searching(head);
         break;
    default:
        break;
    }
   return 0;
}