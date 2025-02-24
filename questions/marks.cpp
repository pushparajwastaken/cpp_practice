#include<iostream>
using namespace std;
int main(){
    string name;
    int marks[5];
    cout<<"Enter the name of the student: ";
    getline(cin,name);
    for (int i=0;i<5;i++){
        cout<<"Enter the marks of subject "<< i+1 <<endl;
        cin>>marks[i];
    }
    float totalmarks,temp=0;
    cout<<"Enter total marks: ";
    cin>>totalmarks;
    for(int i=0;i<5;i++){
        temp+=marks[i];
    }
    float percentage=(temp/totalmarks)*100;
    if(percentage>60){
        cout<<name <<" got First Division"<<endl;
        cout<<"Percentage: "<<percentage;
    }
    else{
        cout<< name <<" got "<<percentage<<" percentage";
    }
    return 0;
}