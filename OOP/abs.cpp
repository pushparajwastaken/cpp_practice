#include<iostream>
#include<vector>
using namespace std;
//virtual function ka mtlb wo funtion jo kisi derived class main redefine hoga{virtual function ke andar functionality define nhi hoti}
//agar ek bhi virtual function aajaye toh woh virtual clas hojati hai 
//abstract class ka mtlb yeh hai ki uske andar kuch nhi bas upar upar ki baat kari gayi hai
//abstract class ke objects nhi banaye jaate hai uska pura pura purpose sirf derived class ke liye hota hai
class Tea{
    public:
    virtual void prepareingredients()=0; //pure virtual function
    virtual void brew()=0;
    virtual void serve()=0;
    void maketea(){
        prepareingredients();
        brew();
        serve();
    }
};
//derived class
class Greentea:public Tea{
    public:
    void prepareingredients()override{
        cout<<"Green leaves and water is ready"<<endl;
    }
    void brew()override{
        cout<<"Brewing green tea"<<endl;
    }
    void serve()override{
        cout<<"Green tea is served"<<endl;
    }

};
//derived class
class MasalaTea:public Tea{
    public:
    void prepareingredients()override{
        cout<<"Tea leaves,masala and water is ready"<<endl;
    }
    void brew()override{
        cout<<"Brewing Masala Tea"<<endl;
    }
    void serve()override{
        cout<<"Masala Tea is served"<<endl;
    }

};




int main(){
    Greentea g;
    MasalaTea m;
    //we didn't create any maketea method in the derived classes
    g.maketea();
    m.maketea();


    return 0;
}