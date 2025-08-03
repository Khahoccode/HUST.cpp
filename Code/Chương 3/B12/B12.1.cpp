#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Nhap so a: ";
    cin >> a;

    if (a % 5 == 0) {
        cout << "So " << a << " chia het cho 5" << endl;
    } else if (a % 2 == 0) {
        cout << "So " << a << " chia het cho 2" << endl;
    } else {
        cout << "So " << a << " khong chia het cho 2 va 5" << endl;             
    }
    return 0;
}