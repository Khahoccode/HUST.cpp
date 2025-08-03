#include <iostream>
using namespace std;
// Bang ma ASCII //
// Chuyen chu cai viet thuong thanh chu cai viet hoa //
int main()
{
    char a;
    cout <<" Chu cai viet thuong: ";
        cin >> a;
    cout <<" Chu cai viet hoa: "<<  char(a- 32) << endl;

    return 0;
}