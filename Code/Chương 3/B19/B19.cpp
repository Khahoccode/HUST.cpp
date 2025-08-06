#include <iostream>
using namespace std;
int main (){

    // Khai bao mang 1 chieu 
    int numbers[5];
    // Nhap dau vao bang vong lap
    for (int i = 0; i < 5; i++)
    {
        cout << "numbers["<< i << "] = ";
        cin >> numbers [i];
    }
    // Xuat dau ra
    for (int i = 0; i < 5; i ++)
    {
        cout <<"numbers["<< i <<"] = " << numbers[i] << endl;
    }
    return 0;
}