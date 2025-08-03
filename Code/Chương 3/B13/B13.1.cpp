#include <iostream>
using namespace std;
int main()
{ 
    int x;
    cout << "Nhap thu: ";
    cin >> x;
    switch (x) {
    case 0:
        cout << "Hom nay la chu nhat" << endl;
        break;
    case 1:
        cout << "Hom nay la thu hai" << endl;
        break;
    case 2:
        cout << "Hom nay la thu ba" << endl;
        break;
    case 3:
        cout << "Hom nay la thu tu" << endl;
        break;
    case 4:
        cout << "Hom nay la thu nam" << endl;
        break;
    case 5:
        cout << "Hom nay la thu sau" << endl;
        break;
    case 6:
        cout << "Hom nay la thu bay" << endl;
        break;
    default:
        cout << "Khong co thu nay trong tuan" << endl;
        break;
} 
    return 0;
}