#include<iostream>
using namespace std;
struct x{
    int data;
    x *next;
    x(int a){
        data =a;
        next=NULL;
    }
};
void traversal(x *nptr){
    while(nptr!=NULL){
        cout<<"Element::"<<nptr->data<<endl;
        nptr=nptr->next;
    }
}
// void deletion(x *nptr){
//     x *preptr;
//     while(nptr->next!=NULL){
//         preptr=nptr;
//         nptr=nptr->next;
//     }
//     nptr=preptr->next=NULL;
//     traversal(nptr);
// }
int main()
{
    int n;
    x *head;
    head=new x(23);
    head->next=new x(80);
    head->next->next=new x(30);
    head->next->next->next=new x(430);
    deletion(head);
    
    //traversal(head);
   return 0;
}