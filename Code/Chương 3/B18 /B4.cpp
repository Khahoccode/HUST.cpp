#include <iostream>
using namespace std;
int main(){

    int n ;
    
    try_again:
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap lai" << endl;
        goto try_again;
    }     int sum_S = 0;
    while (n > 0){
        
        sum_S += (n % 10 );
        n /= 10;
    }
   cout << "Tong cac chu so cua n: " << sum_S << endl; 
    return 0;
}