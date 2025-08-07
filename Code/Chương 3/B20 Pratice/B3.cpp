#include <iostream>
using namespace std;
int main (){
    int n, x, y;
    cout << "n = ";
    cin >> n;

    int numbers[n];
    cout << "Nhap mang: ";
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    for (int i = n; i > x; i--){
        numbers[i] = numbers[i-1];
    } 

    numbers[x] = y; // Them y vao vi tri x
    n++;   

    cout << "Mang sau khi them y vao vi tri x: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " "; // In ra mang sau khi them y
    }

    return 0;
}