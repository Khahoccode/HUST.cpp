#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Nhap thang thu:";
    cin month;

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << " Thang co 31 ngay" << endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << " Thang co 30 ngay" << endl;
        break;
        case 2:
        cout << " Thang co 28 ngay" << endl;
        break;
        default:
        cout << " Khong co thang nay trong nam" << endl;
        break;



    }

    return 0;
}