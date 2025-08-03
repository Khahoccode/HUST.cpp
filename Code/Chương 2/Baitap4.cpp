#include <iostream>
#include <math.h>
// Dung bai toan lop 4 //
using namespace std;
int main ()
{
int a, b, c;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
 
int tong = a + b;
int hieu = abs(b-a);

cout << "Gia tri nho hon = " << (tong - hieu)/2 << endl;
return 0;
}