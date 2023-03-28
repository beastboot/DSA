#include<iostream>
using namespace std;
struct x{
    int data;
    x *next=NULL;
};
x *head=NULL;
x *create_list(){
    int data;
    cin>>data;
    x *newnode=new x;
    newnode->data=data;
    newnode->next=NULL;
    x *p;
    if(head==NULL){
        head=newnode;
        p=head;
    }
    else{
        p->next=newnode;
        p=newnode;
    }
}
void sorting(){
    x *ptr,*cptr;
    int temp;
    ptr=head;
    while(ptr!=NULL){
        cptr=ptr->next;
        while(cptr!=NULL){
            if(ptr->next>cptr->next){
                temp=ptr->data;
                ptr->data=cptr->data;
                cptr->data=temp;
            }
            cptr=cptr->next;
        }
        ptr=ptr->next;
    }
}
void traversal(){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    for(int i=0;i<5;i++){
        create_list();
    }
    sorting();
    traversal();
   return 0;
}