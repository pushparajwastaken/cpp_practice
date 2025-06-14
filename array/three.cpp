 //an array cannot be returned in cpp
//hence a way through to return an array in cpp
//POINTERSSSSSSSSSSSS-holds the memory address,pointing at the memory address
//*-data type ,&-value
/*A pointer stores a memory address — but the address alone doesn't tell the compiler:

How many bytes to read or write

What kind of data (int, float, char, etc.) is at that location

So when you write:


int* ptr;
You're telling the compiler:

ptr is a pointer to an int

At the address stored in ptr, you will find an int-sized value

When you do *ptr, treat that memory as an int

*/
#include<iostream>
using namespace std;

int* preparechaiorders(int cups){
    int* orders=new int[cups];//the new keyword allocates the array in the heap memory
    for(int i=0;i<cups;i++){
        orders[i]=(i+1)*10;
    }
    return orders;
    
}
int main(){
    int cups=5;
    int* chaiorders=preparechaiorders(5);
     for(int i=0;i<cups;i++){
        cout<<"Cup: "<<i+1<<" has "<<chaiorders[i]<< " ml \n";
     }
     delete [] chaiorders;//deallocate the memory
return 0;
}
//if new keyword is used then delete should also be used