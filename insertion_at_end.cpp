#include<iostream>
using namespace std;
struct node{
    int info;
    struct node *link;
};

struct node *start=NULL, *ptr;

void insert_at_start(){
    struct node *nptr;
    nptr= new node;
    cout<<"Enter the data value for the node: ";
    cin>>nptr->info;
    nptr->link=start;
    start=nptr;
}

void insert_at_end(){
    struct node *nptr;
    nptr = new node;
    cout<<endl;
    cout<<"Enter the data value for the node: ";
    cin>>nptr->info;
    ptr = start;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=nptr;
    nptr->link=NULL;
    
}
void deletion_at_end(){
    
}
void traverse(){
    if(start==NULL){
        cout<<"LL is empty"<<endl;
    }
    else{
        ptr=start;
        while(ptr!=NULL){
            cout<<ptr->info<<" ";
            ptr=ptr->link;
        }
    }
    cout<<endl;
}
int main(){
    int i;
    for(int i=0;i<6;i++){
        insert_at_start();
    }
    
    
traverse();

    for(int i=0;i<2;i++){
        insert_at_end();
    }
traverse();
deletion_at_end();
}