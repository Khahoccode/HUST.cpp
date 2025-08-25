#include <iostream>
#include <string>
using namespace std;
class Cat{
    private:
    string name;
    int age;

    public:
    Cat(){}
    Cat(string name, int age){

        this -> name = name;
        this -> age = age;
    }
        //setter
        string get_name()
        {
            return this -> name;
        }

        int get_age(){
            return this -> age;
        }
    };


int main(){
    Cat *cat = new Cat("Bo thui", 5);
    cout << "Name: " << cat->get_name() << endl;
    cout << "Age:" <<  (*cat).get_age() << endl; 
    return 0;
}