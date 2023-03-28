#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
x *f=NULL;
x *r=NULL;
x *enqueu(int n){
    x *newnode=new x;
    // ??int n;
    // cout<<"Enter your data::";
    // cin>>n;
    // cout<<endl;
    newnode->data=n;
    newnode->next=NULL;
    if(f==NULL){
        f=r=newnode;
    }
    else{
        r->next=newnode;
        r=newnode;
    }
}
int dequeu(){
    int val=-1;
    x *ptr=f;
    if(f==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
    f=f->next;
    free(ptr);
    }
    return val;
}
void traversal(x *ptr){
    while (ptr!=NULL)
    {
        cout<<"Elements are::"<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}
int main()
{
    x *head;
    // head==NULL;
    enqueu(30);
    enqueu(40);
    enqueu(50);
    enqueu(60);
    enqueu(80);
traversal(f);
cout<<"queue after dequeue"<<endl;

traversal(f);
   return 0;
}