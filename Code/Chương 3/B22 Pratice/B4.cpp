#include <iostream>
using namespace std;
int main(){

    int n, m;

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    cout << "Nhap mang 2 chieu: " << endl;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ( i == 0 || i == n-1 || j == 0 || j == m-1){ // Cac gia tri bien
            sum = sum + arr[i][j];
            }
        }
    }

    cout << "Tong cac phan tu cua ma tran: " << sum;

    return 0;
}