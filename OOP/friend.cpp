#include<iostream>
#include<vector>
using namespace std;
class Chai
{
    private:
        string teaname;
        int servings;
        
        
      public:
      //also a way to declare a prameterised function
      Chai(string name,int serv):teaname(name),servings(serv){}
   //take const so the value cannot be changed
   //friend can be a function or a class
   friend bool compare(const Chai &chai1, const Chai &chai2);//aka free functions
   //this gives us the access to only read(because of const) reference of Chai
        void displaychai() const {
            cout<<"Tea Name: "<<teaname<<endl;
            cout<<"Servings: "<<servings<<endl;
        }
};
bool compare(const Chai &chai1, const Chai &chai2){
    return chai1.servings>chai2.servings;
}
int main(){
    Chai masalachai("Masala Chai",4);
    Chai gingerchai("Ginger Chai",2);
    masalachai.displaychai();
    gingerchai.displaychai();
    if (compare(masalachai,gingerchai))
    {
        cout<<"Masala Chai has more servings than ginger Chai"<<endl;
    }else{
        cout<<"Ginger Chai has more servings than Masala Chai"<<endl;
    }
    
    return 0;
}