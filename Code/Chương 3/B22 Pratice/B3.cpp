#include <iostream>
using namespace std;
int main(){
    int n, m;

    cout << "Nhap so hang: ";
    cin >> n;

    cout << "Nhap so cot: ";
    cin >> m;

    cout << "Nhap mang 2 chieu: " << endl;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "arr["<< i <<"]["<< j <<"] = ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i< n; i++){
        for (int j = 0; j< m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int max  = arr[0][0];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] > max){
              max = arr[i][j];
            } 
            }
            cout << "Gia tri lon nhat: " << max << endl;

        }
    
    return 0;
}