#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
x *create_node(x *ptr){
int data;
cout<<"Enter the data::";
cin>>data;
cout<<endl;
x *nptr=new x;
nptr->data=data;
nptr->next=NULL;
x *p;
if(ptr==NULL){
    ptr=nptr;
    p=ptr;
    return ptr;
}
else{
    p->next=nptr;
    p=nptr;
    return ptr;
}
}
void traversal(x *ptr){
    while(ptr!=NULL){
        cout<<"elements are ::"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
int n;
x *head=NULL;
cout<<"Enter the no of inputs ::";
cin>>n;
cout<<endl;
for(int i=0;i<n;i++){
head=create_node(head);
}
traversal(head);
   return 0;
}