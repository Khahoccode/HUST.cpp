#include <iostream>
using namespace std;
int main (){
    int degF ;
    cout << "Nhap nhiet do F: ";
    cin >> degF;

    double degC = (degF - 32) / 1.8;
    cout << "Nhiet do C tuong ung: " << (degC) << endl;

    return 0;
}