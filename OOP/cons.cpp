#include<iostream>
#include<vector>
using namespace std;
//3 types of access modifiers-public,private,protected
class Chai{
    public:
    string*teaname;//this pointer allocates memory dynamically
    int servings;
    vector<string>ingredients;
    /*if you have not specified a constructor the compiler(vs code in this case)
     will itself make a constructor method to do the work behind the scenes
    we can modify that constructor function*/
    //the name of the constructor should be exact same as the class
    //we don't put any void or int before constructor neither it returns anything
    //you might think this is a useless function but you'll realize it's importance once you see the libraries of cpp
    //you can create many constructors


    // DEFAULT CONSTRUCTOR
    // Chai(){
    //     teaname="Unknown Tea";
    //     servings=2;
    //     ingredients={"Tea Leaves","Water"};this means setting the value not actually printing them
    //     cout<<"Constructor Called"<<endl;
    // }

    // Paramter(Parameterised) Constructor-jab tumhe chahiye ke object ke declaration ke 
    // sath sath tum uske parameters ko bhi pass kardo
    Chai(string name,int serv,vector<string> ingr)
    //they are just parameters/variables you can change the their names
    {
        //values pass karane ke liye you can just:-
        teaname=new string(name);
        servings=serv;
        ingredients=ingr;
        cout<<"Param Called"<<endl;
    }
    //the need for copy constructor arises when you try to access memory that has been freed
    //COPY CONSTRUCTOR
    
//const keyword is used so that the values of the teaname,servings,ingredients cannot be changed
    Chai(const Chai& other){//this type of parameter is passed to say that give me the reference of the whole object incase of pointers
    //other is just a variable you can name it anything it has the refernce of whole chai
    teaname=new string(*other.teaname);//this means that teaname is a pointer 
    servings=other.servings;
    ingredients=other.ingredients;
    cout<<"Copy Constructor Called"<<endl;
    }
    
    
    //DESTRUCTOR
    ~Chai(){
        delete teaname;
        cout<<"Destructor Called"<<endl;
    }
    void displaychai(){
            cout<<"Tea Name: "<<*teaname<<endl;
            cout<<"Servings: "<<servings<<endl;
            cout<<"Ingredients: ";
            for(string ingredient:ingredients){
                cout<<ingredient<<", ";
            }
            cout<<endl;
        }
};

int main(){
    // Chai defaultchai;//at this point a constructor is callled  
    // defaultchai.displaychai();


    Chai lemontea("Lemon Tea",2,{"Water","Lemon","Honey"});
    //lemontea.displaychai();

    //copy the object

    Chai copiedchai=lemontea;/*if you just want to copy the object thisis the ideal way
    // to copy it from a to z*/
    //copiedchai.displaychai();
//after making a copy like this the copiedchai and lemontea will have same data but changing the data of original will not affect the copiedchai
    *lemontea.teaname="modified tea";
    cout<<"Lemon Tea: "<<endl;
    lemontea.displaychai();

    cout<<"Copied Tea: "<<endl;
    copiedchai.displaychai();

    return 0;

}
//if you want to copy the values of default value of an object then copy constructor is called