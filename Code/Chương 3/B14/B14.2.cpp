#include <iostream>
using namespace std;
// Tim so nho hon bang toan tu 3 ngoi //
int main()
{
    int a, b;

    cout << " Nhap so a: ";
    cin >> a;
    cout << " Nhap so b: ";
    cin >> b;

    int c = (a - b < 0) ? a : b;
    cout << "So nho hon: " << c << endl;

    return 0;
}