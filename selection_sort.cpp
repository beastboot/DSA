#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    cout<<"Elements of your array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int selection_sort(int *a,int n){
    int indexmin,temp;
    for(int i=0;i<n-1;i++){
        indexmin=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[indexmin]){
                indexmin=j;
            }
        }
        temp=a[i];
        a[i]=a[indexmin];
        a[indexmin]=temp;

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
    selection_sort(arr,n);
    traversal(arr,n);
   return 0;
}