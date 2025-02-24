#include<iostream>
#include<vector>
#include<string>
using namespace std;
//base class
class Tea{
    //public sabke liye available ,private sirf class ke liye aur protected class+derived class bhi
    protected:
    string teanme;
    int servings;
    public:
    Tea(string name,int servs):teanme(name),servings(servs){

    }
    virtual void brew() const{
        cout<<"Brewing "<<teanme<<"with generic method"<<endl;
    }
    virtual void serve() const{
        cout<<"Serving "<<servings<<"with generic method"<<endl;
    }
    virtual ~Tea(){
        cout<<"Tea object destroyed for "<<teanme<<endl;
    };
    void maketea(){
        
        brew();
        serve();
    }
};
class Greentea:public Tea{
    public:
    Greentea(int servings):Tea("Green Tea",servings){
        cout<<"Green Tea object created"<<endl;
    }
    //final keyword ka mtlb hai iske baad se koi bhi agar iss class ko inherit kare toh iss method ko override nahi kar sake
    virtual void brew() const override final{
        cout<<"Brewing "<<teanme<<" Green Tea object "<<endl;
    }
    virtual void serve() const override final{
        cout<<"Serving "<<servings<<"Green Tea object "<<endl;
    }
    virtual ~Greentea(){
        cout<<"Tea object destroyed for "<<teanme<<endl;
    };
};
int main(){
    Tea* tea1=new Greentea(2);
    tea1->maketea();
    delete tea1;
    return 0;
}