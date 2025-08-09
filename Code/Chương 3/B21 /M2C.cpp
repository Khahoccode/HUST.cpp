#include <iostream>
using namespace std;

int main() {
    const int SO_HANG = 2;
    const int SO_COT = 3;

    // khai bao
    int arr[SO_HANG][SO_COT];

    // nhap mang
    for (int i = 0; i < SO_HANG; i++) {
        for (int j = 0; j < SO_COT; j++) { // sửa i++ thành j++
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // xuat mang
    for (int i = 0; i < SO_HANG; i++) {
        for (int j = 0; j < SO_COT; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // thêm xuống dòng sau mỗi hàng
    }

    return 0;
}