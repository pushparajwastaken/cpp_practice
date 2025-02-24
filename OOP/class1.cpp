#include<iostream>
#include<vector>
using namespace std;
//we generally just make variables and functions inside class
class Chai
{
    public:
    //data members(attributes)-a fancy name for variables
        string teaname;
        int servings;
        vector<string>ingredients;
        
        //member function(methods)-a fancy name for function inside a class
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
    chai.teaname="green tea";
    chai.servings=2;
    chai.ingredients={"green tea","water"};
    chai.displaychai();

    Chai chai2;
    chai2.teaname="black tea";
    chai2.servings=3;
    chai2.ingredients={"water","tea leaves"};
    chai2.displaychai();

    return 0;
}