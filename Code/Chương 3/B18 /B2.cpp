#include <iostream>
using namespace std;
int main(){
int n;
    try_again:
    cout << "Nhap vao so nguyen khong lon hon 100: ";
    cin >> n;

    if (n < 0 && n > 100){
        goto try_again;
    } else {
        int S = 0;
        for (int i = 1; i <= n; i += 2){
            S = S + i;
            
        }
            cout << "Tong S = " << S << endl;

    }
    return 0;
}