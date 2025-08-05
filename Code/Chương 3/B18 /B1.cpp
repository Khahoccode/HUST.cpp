#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Nhap vao so a: ";
    cin >> a;

    cout << "Nhap vao so b: ";
    cin >> b;

    if (a == 0 && b == 0){
        cout << "Phuong trinh vo so nghiem";
    } else if( a == 0 && b != 0) {
        cout << "Phuong trinh vo nghiem";
    } else if ( a != 0) {
        cout << "Phuong trinh co nghiem x = " << double(-b) / a << endl;
    }
    return 0;
}