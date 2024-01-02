#include <iostream> 
using namespace std;
/* 
⚪ Encapsulation
*/

class Friend{

    //private by default in c++
    string Name;
    int Age;
    string BirthMonth;

public:
    //This is a setter method
    void setName(string name){
        Name = name;
    }
    //This is a getter method
    string getName(){
        return Name;
    }

    void setAge(int age){ //setter method
        if(age>=18){
        Age = age;
        }
    }
    int getAge(){ //getter method
        return Age;
    }

    
    void setBirthMonth(string month){
        string Months[12] = {"January","February", "March", "April", "May", "June", "July","August", "September", "October", "Novermber", "December"};
        for (int i = 0; i<12; i++){
            if(Months[i]== month){
                BirthMonth = month;
            }
        }
        
    }
    string getmonth(){ //getter method
        return BirthMonth;
    }
    

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
    
    Friend1.setAge(16); //will not work bc it doesn't meet the validation
    cout<<Friend1.getName()<<" is "<<Friend1.getAge()<<" yr old."<<endl;

    //month won't work
    Friend2.setAge(28); Friend2.setBirthMonth("Joafwo");
    cout<<Friend2.getName()<<" is "<<Friend2.getAge()<<" yr old. Their birth month is "<<Friend2.getmonth()<<endl;

    //month will work
    Friend2.setAge(28); Friend2.setBirthMonth("March");
    cout<<Friend2.getName()<<"'s birth month is "<<Friend2.getmonth()<<endl;
}