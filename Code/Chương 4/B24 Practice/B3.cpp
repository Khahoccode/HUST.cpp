#include <iostream>
using namespace std;
int main(){

    int n, m;

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    int arr1[n][m];
    cout << "Nhap ma tran 1: " << endl;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cout << "arr1["<< i <<"]["<< j <<"] = ";
            cin >> arr1[i][j];
        }
    }

     for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[n][m];
    cout << "Nhap ma tran 2: " << endl;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cout << "arr2["<< i <<"]["<< j <<"] = ";
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int arr3[n][m];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
           arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Tong 2 ma tran: " << endl;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}