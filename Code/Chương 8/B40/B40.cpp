#include <iostream>
#include <string>
using namespace std;
struct Student{
    string name;
    int age;

    Student () {} 
    Student (string _name, int _age){
    name = _name; 
    age = _age;
}
};


int main(){
    Student student("Long", 21); //Stack
     //cap phat dong cho struct
    // Student *student_ptr = new Student ("Long", 21); //Heap
    //Con tro den dia chi cua struct
    Student *student_ptr = &student;
   
    //In ra name
    cout << student_ptr -> name << endl;
    //In ra age
    cout << (*student_ptr).age;

    
}