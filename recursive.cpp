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
    if(nptr==NULL){
        return;
    }
    traversal(nptr->next);
    cout<<"elements::"<<(nptr->data)<<endl;

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