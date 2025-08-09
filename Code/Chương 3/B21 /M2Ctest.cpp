#include <iostream>
using namespace std;
int main(){

    const int rows = 2;
    const int cols = 3;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << "arr[" << i <<"][" << j <<"] = ";
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
            cout << endl;; // them xuống dòng sau mỗi hàng !!

    }


    return 0;
        }