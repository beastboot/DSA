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
    for(i=n;i>=n-1;i--){
        b[i+1]=b[i];
    }
    b[n-1]=ITEM;
    
    for(int i=0;i<7+1;i++){
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
void linear(int b[]){
    int ITEM;
    cout<<"Enter number to searched::"<<endl;
    cin>>ITEM;
    for(int i=0;i<7;i++){
        if(ITEM==b[i]){
            cout<<"Item found at" i "position"<<endl;
        }
    }
}
// void binary(int b[]){
//     int ITEM,ub=7,lb=0;
//     cout<<"Enter the number to be searched::"<<endl;
//     cin>>ITEM;
//     int mid=(ub+lb)/2;
//     if(b[mid]<ITEM){
//        ub=mid;
//     }
// }


int main()
{
    int a[7];
    cout<<"Enter your array:"<<endl;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    
    int ch;
    cout<<"Enter 1 for deletion :: 2 for insertion :: 3 for traverse ";
    cin>>ch;
    cout<<endl;
    switch(ch){
    case 1:{deleter(a);
    break;
    }
    case 2:{insert(a);
    break;
    }
    case 3:{traverse(a);
    break;
    }
    case 4:{linear(a);
    break;
    }
    // case 5:{Binary(a);
    // break;
    // }
    default:
    {
        break;
    }
   return 0;
}
}