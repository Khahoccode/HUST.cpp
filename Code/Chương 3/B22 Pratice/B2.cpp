#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "n =";
    cin >> n;

    int arr[n];

    cout << "Nhap mang: " << endl;
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    for (int i =0; i <n; i++){
        cout << arr[i] << " ";
    }

    int max = arr[0];
    for (int i = 0; i < n; i ++){
        if (arr[i] > max){
        max = arr[i];
        }
    }

    cout << "Gia tri lon nhat: " << max << endl;

    return 0;
}