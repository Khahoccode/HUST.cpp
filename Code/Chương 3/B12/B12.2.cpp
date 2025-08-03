#include <iostream>
using namespace std;
int main()
{
    const int tuoi_cong_dan = 18;
    int tuoi;
    cout << "Nhap tuoi: ";
    cin >> tuoi;

    if  (tuoi < tuoi_cong_dan){
        cout << " Ban chua du tuoi de lap gia dinh" << endl;
    } else {
        cout << " Ban da du tuoi de lap gia dinh" << endl;
    }
    
    return 0;
}