#include <iostream>
using namespace std;
// Nhap vao mot so nguyen le > 0
int main(){
    int n;

    try_again:
    cout << "n = ";
    cin >> n;

    if ( n <= 0 || n % 2 == 0 ) {
    goto try_again;
    }
    cout << "Gia tri cua n la: " << n << endl;

    return 0;
}