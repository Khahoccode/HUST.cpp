#include <iostream>
using namespace std;

// Tinh tong cac phan tu trong mang 2 chieu

int main (){
     int n, m;

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap mang" << endl;
    int arr[n][m];
    for (int i = 0;i< n; i++){
        for (int j = 0; j< m; j++){
            cout << "arr["<<i<<"]["<<j<<"] = ";
            cin >> arr[i][j];
        }
    }

    for ( int i= 0; i < n; i++){
        for (int j = 0; j <m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }

    int sum = 0;
    for (int i =0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum += arr[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang: " << sum << endl;


    return 0;
}