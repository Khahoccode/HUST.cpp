#include <iostream>
using namespace std;
// Nhap vao mot so nguyen le > 0
int main(){
    int n;

    while(true){
        cout << "n = ";
        cin >> n;

        if ( n > 0 && n % 2 == 1 ) {
           break;
        }
        cout << "Gia tri cua n la: " << n << endl;
    }
    return 0;
}