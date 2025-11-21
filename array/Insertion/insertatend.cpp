#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"No of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Insert elements into array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        n=n+1;
        cout<<"Enter the element for end"<<endl;
        cin>>arr[n-1];
        cout<<"The elements of the array are:"<<endl;
        
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }