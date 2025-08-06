#include <iostream>
using namespace std;
int main(){
    int n, x;   // Khai bao bien n (so luong phan tu) va x (gia tri can them)
    int numbers[20]; // Khai bao mang co kich thuoc toi da 20 phan tu

    cout << "n = ";
    cin >> n;

    //Nhap mang
        cout << "Nhap mang: ";
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    cout << "x = ";
    cin >> x;

    //Them x vao cuoi mang
    numbers[n] = x; //Them x vao cuoi mang
    n++; //Tang them 1 phan tu cua mang

    cout << "Mang sau khi them: ";
    for(int i = 0; i < n; i++)
    {
        cout << numbers[i] << " "; // In ra mang sau khi them x
    }

    return 0;
}