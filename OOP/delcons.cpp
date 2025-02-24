#include<iostream>
#include<vector>
using namespace std;
//delegation constructor ka kaam hai dusre constructor ko call kar dena
class Chai{
    public:
    string teaname;
    int quantity;
    vector<string>ingredients;
    //delegating constructor
    Chai(string name):Chai(name,1,{"water","tea leaves"}){}
    //main constructor
    Chai(string name,int serve,vector<string>ingre){
        teaname=name;
        quantity=serve;
        ingredients=ingre;

        cout<<"Main Construcotr callled!!"<<endl;
    }
    void displaychai(){
            cout<<"Tea Name: "<<teaname<<endl;
            cout<<"Servings: "<<quantity<<endl;
            cout<<"Ingredients: ";
            for(string ingredient:ingredients){
                cout<<ingredient<<", ";
            }
            cout<<endl;
        }
};
int main(){
    Chai quickchai("Quick Chai");//sirf ek hi value pass kari par kaam pura chahiye
    quickchai.displaychai();
    return 0;
}
