#include <iostream> 
using namespace std;
/* 
⚪ Inheritance
*/
class AbstractFriend{
    virtual void Adult() =0;

};
class Friend:AbstractFriend{

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

    //Abstracting part
    void Adult(){
        if (Age>18){
            cout<<Name<<" is an adult!"<<endl;
        }
        else{
            cout<<Name<<" is still a child!"<<endl;
        }
    }
};
int main(){
    Friend Friend1("Shao",19,"December");
    Friend Friend2("Tracy", 16, "Feburary");
    cout<<endl;
    
    Friend1.setAge(16); //will not work bc it doesn't meet the validation
    cout<<Friend1.getName()<<" is "<<Friend1.getAge()<<" yr old."<<endl;
    cout<<endl;

    //Abustraction
    Friend1.Adult();
    Friend2.Adult();
    
}