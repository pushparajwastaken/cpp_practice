#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int >mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout<<"q"<<endl;
    cin>>q;
    cout<<q<<" occurs "<<mpp[q]<<" times"<<endl;
    return 0;
}