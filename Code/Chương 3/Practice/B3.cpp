#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhap vao so duong: ";
    cin >> n;
    if(n < 0){
        cout << "Nhap so sai, vui long nhap lai" << endl;
    } else {
        int P = 1;
        for (int i = 1; i <= n; i++ ){
            P = P*i;
        }
        cout << "n! = " << P << endl;

    }
    return 0;
}