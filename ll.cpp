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
int main()
{
    struct x *head;
    head=new x(20);
    head->next=new x(36);
    head->next->next=new x(32);
    traversal(head);
   return 0;
}