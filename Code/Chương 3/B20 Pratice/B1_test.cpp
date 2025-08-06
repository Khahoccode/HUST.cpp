#include <iostream>
using namespace std;
int main(){
    int n, x;
    int numbers[20];

    // Nhap so phan tu cua mang
    cout << "n = ";
    cin >> n;

    // Nhap mang
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i ++){
        cin >> numbers[i];
    }

    // Nhap gia tri x
    cout << "x = ";
    cin >> x;
    numbers[n] = x;
    n++;

    // In gia tri mang sau khi them x
    cout << "Mang sau khi them: ";
    for (int i = 0; i < n; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}