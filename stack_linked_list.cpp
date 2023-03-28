#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
};
int isempty(x *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(x *top){
    x *p=new x;
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}
x *push(x *top,int d){
    if(isfull(top)){
        cout<<"Overflow"<<endl;
    }
    else{
        x *n=new x;
        n->data=d;
        n->next=top;
        top=n;
        return top;
    }
}
void traversal(x *ptr){
    while(ptr!=NULL){
        cout<<"Elements are::"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
x *pop(x *top){
    if(isempty(top)){
        cout<<"underflow"<<endl;
    }
    else{
        x *p=top;
        top=top->next;
        free(p);
        return top;
    }
}
int main()
{
x *top=new x;
top=NULL;
top=push(top,78);
top=push(top,30);
top=push(top,100);
top=push(top,114);
top=push(top,333);

traversal(top);
cout<<"After poping elements are:-"<<endl;
top=pop(top);
traversal(top);
   return 0;
}