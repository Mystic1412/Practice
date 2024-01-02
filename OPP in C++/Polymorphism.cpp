#include <iostream> 
using namespace std;
/* 
⚪ Polymorphism
*/
class AbstractFriend{
    virtual void Adult() =0;

};
class Friend:AbstractFriend{
    //private by default in c++
    int Age;
    string BirthMonth;
protected:
    string Name;
public:
   
    void setName(string name){  //This is a setter method
        Name = name;
    }   
    string getName(){ //This is a getter method
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

    virtual void Activity(){
        cout<<Name<<" is doing homework :sob:"<<endl;
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

class MaleFriend:public Friend{
public:
    char Gender;

    //Constructor
    MaleFriend(string name, int age, string birthMonth, char gender)
    :Friend(name, age, birthMonth)
    {
        Gender = gender;
    }

    void CharacterInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Birth Month: "<<getmonth()<<endl;
        cout<<"Gender: "<<Gender<<endl;
    }

    void Activity(){
        cout<<Name<<" is doing camping. YUGHHH"<<endl;
    }
};

class FemaleFriend: public Friend{
    public:
    char Gender;

    //Constructor
    FemaleFriend(string name, int age, string birthMonth, char gender)
    :Friend(name, age, birthMonth)
    {
        Gender = gender;
    }

    void Activity(){
        cout<<Name<<" is doing their nail. ting!"<<endl;
    }
};
//HW created another inheritance class 

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
    cout<<endl;

    //Inheritance
    MaleFriend Friend3 = MaleFriend("Hao", 16, "March", 'M');
    Friend3.CharacterInfo();

    Friend3.Adult();
    cout<<endl;


/*The most common use of polymorphism is when a paret class reference is used to refer to a child class oblject*/
    FemaleFriend Friend4 = FemaleFriend("Nafisa", 5,"April", 'F');
    
    Friend* f1 = &Friend3;
    Friend* f2 = &Friend4;

    f1 -> Activity();
    f2 -> Activity();

}