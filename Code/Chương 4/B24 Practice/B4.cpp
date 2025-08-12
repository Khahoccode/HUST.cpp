#include <iostream>
using namespace std;
int main(){
    int n,m;

    cout << "n = ";
    cin >> n;

     cout << "m = ";
    cin >> m;


    int arr[n][m];
    cout << "Nhap mang: " << endl;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "cout["<< i <<"][" << j <<"] = ";
            cin >> arr[i][j];
        }
    }

    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        int sum = 0;
    for( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] % 2 != 0 ){
                sum += arr[i][j];
            }
        }
    }

    cout << "Tong cac so le: " << sum;

    return 0;
}