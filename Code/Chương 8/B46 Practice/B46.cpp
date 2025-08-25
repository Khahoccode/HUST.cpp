#include <iostream>
#include <string>
using namespace std;

class Person
{
 public:
 //Properties
    string name;
    int age;
    string adress;
//Construtor
    Person(){};
    Person(string _name, int _age, string _adress){
        name = _name;
        age = _age;
        adress = _adress;
        };

//Methods
void work(){
    cout << name << " is working in " <<  adress << endl;
}

private:

};


int main(){

    Person person1("Dang Nam Khanh", 20, "Ha Noi");
    // person1.name = "Dang Nam Khanh";
    // person1.age = 20;
    // person1.adress = "Ha Noi";

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Adress: " << person1.adress << endl; 
    
    person1.work();
    return 0;
}