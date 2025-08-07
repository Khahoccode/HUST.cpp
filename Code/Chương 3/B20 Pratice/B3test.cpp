#include <iostream>
using namespace std;
int main(){
    int x, n, y;

    cout << "n = ";
    cin >> n;

    int numbers[n];
    cout << "Nhap mang: ";
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    cout << "x = ";
    cin >> x;

    for( int i = n; i>x; i--)
    {
        numbers [i] = numbers [i -1];
    }
    cout << "y = ";
    cin >> y;
    numbers [x] = y;
    n++;

    for (int i = 0; i <n; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}