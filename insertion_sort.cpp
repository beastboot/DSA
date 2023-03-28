#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    cout<<"Elements of your array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int insertion_sort(int *a,int n){
    int j=0,key;
 for(int i=0;i<=n-1;i++){
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;

 }
}
int main()
{
    int arr[100],n;
    cout<<"Enter the number of element you want to insert::";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter your data::";
        cin>>arr[i];
        cout<<endl;
    }
    traversal(arr,n);
    insertion_sort(arr,n);
    traversal(arr,n);
   return 0;
}