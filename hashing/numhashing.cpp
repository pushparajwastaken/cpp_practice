#include<iostream>
using namespace std;

int hashing(int arr[],int n,int q){
    int hash [(n * 2)+ 3]={0};
    for (int i =0;i<n;i++){
        hash[arr[i]]+=1;
    }
    return hash[q];
}
int main (){
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number"<<endl;
    cin>>q;
    int ans=hashing(arr,n,q);
    cout<<q <<" occurs "<< ans<< " times"<<endl;
    return 0;
}