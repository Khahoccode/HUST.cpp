#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// Ham nguyen mau
void input(string label, int &n);
bool is_prime(int n);

// Ham chinh
int main(){
    int n;
    input ("n = ", n);
    if (is_prime(n)){
    cout << n << "la so nguyen to";
}   else 
{ 
    cout << n << " khong la so nguyen to";
}
    return 0;
}

//Khai bao n
void input(string label, int &n){
    cout << label;
    cin >> n;
}

//Khai bao kiem tra nguyen to
bool is_prime(int n){
  //So nguyen to la so chia het cho 1 va chinh no
  // Dieu kien neu chia lay phan du bang 0( chia het ) thi ko phai so nguyen to
  for (int i = 0; i <= sqrt(n); i++){
    if (n % i == 0){
        return false;
  } 
}
    return true;
}
    
