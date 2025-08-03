#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhap vao so duong n: ";
    cin >> n;
    if (n < 0) {
        cout << "Nhap so sai, vui long nhap lai!" << endl;
    } else {
        int S;
        S = 0;
        for (int i = 1; i <= n; i++) {
            S = S + i;
        }
        cout << "Tong S la: " << S << endl;
    }

    return 0;
}