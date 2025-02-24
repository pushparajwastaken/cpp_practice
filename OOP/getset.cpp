#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    private:
        string teaname;
        int servings;
        vector<string>ingredients;
    public:
    Chai(){
        teaname="Unknown Tea";
        servings=2;
        ingredients={"Tea Leaves","Water"};
    }
    Chai(string name,int serv,vector<string> ingr)
    
    { 
        teaname=name;
        servings=serv;
        ingredients=ingr;
    }
    //getter 
    string gettreaname(){
        return teaname;
    }
    //setter
    string setteaname(string name){
        //you can use your logic on it like returning input in capital,adding symbols or strings to it
        teaname=name;
    }   
    int getservings(){
        return servings;
    }
    int setservings(int serv){
        servings=serv;
    }
    vector<string>getingredients(){
        return ingredients;
    }
    vector<string>setingredients(vector<string>ingr){
        ingredients=ingr;
    }
    void displaychai(){
            cout<<"Tea Name: "<<teaname<<endl;
            cout<<"Servings: "<<servings<<endl;
            cout<<"Ingredients: ";
            for(string ingredient:ingredients){
                cout<<ingredient<<", ";
            }
            cout<<endl;
        }
};
int main(){
    Chai chai;
    chai.setteaname("Ginnger Tea");
    string name=chai.gettreaname();
    cout<<name;
    return 0;
}