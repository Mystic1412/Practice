#include <iostream> 
using namespace std;

class Friend{
public:
    //Below: these are attributes
    string Name;
    int Age;
    string BirthMonth;

    void Intro(){ //Behavior
        cout<<"My name is "<< Name<<endl;
        cout<<"I am "<<Age<<" years old"<<endl;
        cout<<"My birth month is: "<<BirthMonth<<endl; 
        cout<<endl;
    }

    //Constructors
    Friend(string name, int age, string birthMonth){
        Name = name;
        Age = age;
        BirthMonth = birthMonth;
    }
};
int main(){
    Friend Friend1("Shao",19,"December");
    /* Can get rid of it since we have it inside our constructor
    Friend1.Name = "Shao";
    Friend1.Age = 19;
    Friend1.BirthMonth = "December";*/
    Friend1.Intro();

    Friend Friend2("Tracy", 16, "Feburary");
    Friend2.Intro();
}