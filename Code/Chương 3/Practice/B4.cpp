#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhap so duong: ";
    cin >> n;
    if(n < 0){
        cout << "Nhap so sai, vui long nhap lai" << endl;
    } else {
       for (int i = 1; i <= n; i++){
         if (i % 5 == 0){
       cout << i << " ";
         } 
    }
}
    return 0;
}