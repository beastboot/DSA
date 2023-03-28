#include<iostream>
using namespace std;
struct x{
    int data;
    string n;
    x *next=NULL;
};
x *head=NULL;
void create_list(){
    int data;
    string s;
    cin>>data>>s;
    x *newnode=new x;
    newnode->data=data;
    newnode->n=s;
    newnode->next=NULL;
    x *p;
    if(head==NULL){
        head=newnode;
        p=newnode;
    }
    else{
        p->next=newnode;
        p=newnode;
    }

}
void searching(){
    int v;
    cin>>v;
    while(head!=NULL){
        if(head->data==v){
            cout<<"You have secured "<<head->n<<" grade";
            break;
        }
        else{
            head=head->next;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        create_list();
    }
    searching();
   return 0;
}