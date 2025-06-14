//a myltdimensional array array 
#include<iostream>
using namespace std;

int main(){
int chaisales[3][7]={{1,2,3,4,5,6,7},{4,5,6,2,1,4,3},{23,5,56,66,43,22,223}};
for(int i=0;i<3;i++){
    for(int j=0;j<7;j++){
        cout<<chaisales[i][j];
        if (j<6){
            cout<<", ";
        }
    }
    cout<<endl;
}
return 0;
}