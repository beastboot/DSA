#include<iostream>
using namespace std;
struct x{
    int data;
    char gd;
    x *next=NULL;
};
x *create_list(x *ptr){
    // x *ppt=ptr;
    x *newnode=new x;
    int data;
    char s;
    cin>>data;
    cin>>s;
    newnode->data=data;
    newnode->gd=s;
    newnode->next=NULL;
    x *p;
    if(ptr==NULL){
        ptr=newnode;
        p=ptr;
        return ptr;
    }
    else{
        newnode->next=p;
        p=newnode;
        return ptr;
    }
}
void searching(x *ptr){
    x *p=ptr;
    int c=0;
    int ro;
    cin>>ro;
    while(p!=NULL){
        if(ro==p->data){
            c=1;
            cout<<"You have secured "<<p->gd<<" grade"<< endl;
        }
        p=p->next;
    }
    if(c==0){
        cout<<"You have not appeared for the Contest-1"<<endl;
    }
}
int main(){
    x *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        head=create_list(head);
    }
    searching(head);
}