#include <iostream>
using namespace std;
// Xoa phan tu o vi tri x trong mang
int main (){
    int n, x;

    cout << " n = ";
    cin >> n;

    int numbers[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    cout << "x = ";
    cin >> x;


    for (int i = x; i < n - 1; i++){
        numbers[i] = numbers[i + 1]; // Xoa phan tu o vi tri x
    }
    n--;
    cout << "Mang sau khi xoa phan tu o vi tri x: ";
    for(int i = 0; i < n; i++)
    {
        cout << numbers[i] << " "; // In ra mang sau khi them x
    }
    return 0;
}