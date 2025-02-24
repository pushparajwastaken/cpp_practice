#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
    string teaname;
    int servings;
    vector<string>ingredients;
    Chai(){
        teaname="Unknown Tea";
        servings=2;
        ingredients={"Tea Leaves","Water"};
        cout<<"Constructor Called"<<endl;
    }

  
    Chai(string name,int serv,vector<string> ingr)

    {
       
        teaname=name;
        servings=serv;
        ingredients=ingr;
        cout<<"Parameter Constructor Called"<<endl;
    }
  
    void displaychai(){
            cout<<"Tea Name: "<< teaname<<endl;
            cout<<"Servings: "<<servings<<endl;
            cout<<"Ingredients: ";
            for(string ingredient:ingredients){
                cout<<ingredient<<", ";
            }
            cout<<endl;
        }
};

int main(){
    Chai defaultchai; 
    defaultchai.displaychai();


    Chai lemontea("Lemon Tea",2,{"Water","Lemon","Honey"});
    lemontea.displaychai();

    return 0;

}