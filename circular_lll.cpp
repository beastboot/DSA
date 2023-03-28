#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
void traversal(x *p){
    x *ptr=p;
    do{
        cout<<"elements::"<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=p);
}
x *insertion_first(x *p,int data){
    x *nptr=new x;
    nptr->data=data;
    x *ptr=p->next;
    while(ptr->next!=p){
        ptr=ptr->next;
    }
    //nptr->data=90;
    ptr->next=nptr;
    nptr->next=p;
    p=nptr;
    //traversal(p);
    return p;
}
int main()
{
    x *head=new x;
    x *first=new x;
    x *second=new x;
    head->data=30;
    head->next=first;
    first-> data=20;
    first->next=second;
    second->data=80;
    second->next=head;
    // traversal(head);
    head=insertion_first(head,70);
    head=insertion_first(head,80);
    head=insertion_first(head,90);
    head=insertion_first(head,50);
    head=insertion_first(head,5000);
    traversal(head);

   
   return 0;
}