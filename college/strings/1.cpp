#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2,result;
    cout<<"Enter the first string"<<endl;
    getline(cin,s1);
    cout<<"Enter the second string"<<endl;
    getline(cin,s2);
    result=s1+s2;
    cout<<"The result string is "<<result<<endl;
}