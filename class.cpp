#include<iostream>
using namespace std;
int traverse(int);
int traverse(int b[]){
    cout<<"Your array is :"<<endl;
    for(int i=0;i<7;i++){
        cout<<b[i];
        cout<<endl;
    }
}
void insert(int b[]){
    int n,ITEM,i;
    cout<<"Enter The address at which you want to insert:";
    cin>>n;
    cout<<endl;
    cout<<"Enter the number :";
    cin>>ITEM;
    cout<<endl;
    for(i=n-1;i>=n;i--){
        b[i+1]=b[i];
    }
    b[n-1]=ITEM;
    for(int i=0;i<7-1;i++){
      cout<<b[i];
         cout<<endl;
    }
}
void deleter(int b[]){
    int n;
    cout<<"Enter the address from which you want deletion:";
    cin>>n;
    cout<<endl;
    for(int i=n-1;i<7;i++){
        b[i]=b[i+1];
    }
    n=n-1;
    for(int i=0;i<7-1;i++){
      cout<<b[i];
      cout<<endl;
    }

}


int main()
{
    int a[7];
    cout<<"Enter your array:"<<endl;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    traverse(a);
    insert(a);
    deleter(a);
    
   return 0;
}