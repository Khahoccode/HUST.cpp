#include <iostream>
#include <string>
using namespace std;

struct Date{
    int date;
    int month;
    int year;

    Date(){}

    Date(int _date, int _month, int _year){
        date = _date;
        month = _month;
        year = _year;
    }
};

struct Student
{
    //properties
    string name;
    int age;
    Date dob;

    //construtor
    Student(string _name, int _age, Date _dob){
        name = _name;
        age = _age;
        dob = _dob;
    };


    //methods
    void run(){
        cout << name << " is running ..." << endl;
    }

    void print(){
        cout << "Ten: " << name << ", tuoi: " << age;
        cout << ", ngay sinh: " <<dob.date << "/" << dob.month << "/" << dob.year << endl;
    }

};
int main(){
// Student student_1("Khanh", 20, Date(1,1,2005));
// cout << "Nhap ten: ";
// getline(cin, student_1.name);
// cout << "Nhap tuoi: ";
// cin >> student_1.age;

// cout << "Ten: " << student_1.name << endl;
// cout << "Tuoi: " << student_1.age << endl;
// cout << "Ngay sinh: " << student_1.dob.date << "/" << student_1.dob.month << "/" << student_1.dob.year << endl;

//Khai bao mang sinh vien
Student student[3] = {
    Student("Kha", 18, Date(1,1,2005)),
    Student("Nho", 18, Date(2,1,2005)),
    Student("LOiNHOi", 18, Date(3,1,2005))
};

for (int i =0 ; i < 3; i++){
 student[i].print();
}
// student_1.run();
return 0;
}