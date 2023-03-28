#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
x *create_node(x *ptr){
        int data;
        cout<<"Enter yout data::";
        cin>>data;
        cout<<endl;
        x *newnode=new x;
        newnode->data=data;
        newnode->next=ptr;
        x *p;
        if(ptr==NULL){
            ptr=newnode;
            p=newnode;
        }
        else{
           p->next=newnode;
           p=newnode;
           return ptr;
        }
}
void traversal(x *head){
    x *ptr=head;
    do{
        cout<<"elements are::"<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}
x *insertion_first(x *ptr){
    x *p=ptr;
    x *newnode=new x;
    int data;
    cout<<"Enter your data you want to insert at first::";
    cin>>data;
    cout<<endl;
   while(p->next!=ptr){
    p=p->next;
   }
   newnode->data=data;
   p->next=newnode;
   newnode->next=ptr;
   ptr=newnode;
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
     head=create_node(head);
    }
    traversal(head);
    head=insertion_first(head);
    traversal(head);
   return 0;
}