#include <iostream>
using namespace std;
const float PI = 3.14;

struct Circle{
    float r;

    friend istream& operator >> (istream &is, Circle &circle){
        cout << "Nhap ban kinh: ";
        cin >> circle.r;
        
        return is;
    };
    float chu_vi(){
        return r * 2 * PI;
    }

    float dien_tic(){
        return r * r * PI;
    }

};


int main(){
    Circle circle;
    cin >> circle;
    cout << "Chu vi la: " << circle.chu_vi() << endl;
    cout << "Dien tich la: " << circle.dien_tic() << endl;
    return 0;
}