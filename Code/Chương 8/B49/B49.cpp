#include <iostream>
#include <string>
using namespace std;
class Animal{
 public: 
    string name;
    int age;
    float weight;
    void run(){
    cout << "Animal is eating";
}
};

class Cat : public Animal
{
    public: 
    string name;
    void eat(){
        cout << " Cat is eating ...";
    }
};

class Dog : public Animal
{     
    public: 
    string name;
    void eat(){
        cout << "Dog is eating ...";
    }
    };

int main(){
    Cat cat;
    cat.weight = 5;
    cat.name = "Bo thui";
    cout << "Cat: " << endl;
    cout << "Name: "  << cat.name << endl;
    cout << "weight: " << cat.weight << endl;
    
    Dog dog;
    dog.weight = 10;
    dog.name = "Nau nau";
    cout << "Dog: " << endl;
    cout << "Name: "  << dog.name << endl;
    cout << "weight: " << dog.weight;

    return 0;
}