#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    cout<<"Elements of your array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int bubble_sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // return arr;
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
    bubble_sort(arr,n);
    traversal(arr,n);
   return 0;
}