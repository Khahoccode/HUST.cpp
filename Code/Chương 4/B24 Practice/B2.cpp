#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "n = ";
    cin >> n;

    int arr[10];

    cout << " Nhap mang: " << endl;
    for (int i = 0 ; i < n ; i++){
        cout << "arr["<< i <<"] = ";
        cin >> arr[i];
    }

    int k;
    cout << "k = ";
    cin >> k;

    int x = -1, y = -1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i != -1 && (arr[i] + arr[j] == k)){
                 x = i; 
            y = j;
            break;
        }
        }
        if (x != -1 && y != -1){
            break;
        }
    }

    if (x!= -1 && y != -1){
        cout << "Ket qua: " << x << " " << y;
    } else {
        cout << "Khong co ";
    }

    return 0;
}