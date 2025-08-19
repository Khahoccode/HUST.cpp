#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input(string label, int &n);
int sumnt(int n);

int main(){
    int n; 
    input("n = ", n);

    cout << "Ket qua la: " << sumnt(n);

    return 0;
}

void input(string label, int &n ){
    cout << label;
    cin >> n;
}

bool is_prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if ( n % i == 0){
            return false;
        }
    }
            return true;

}

int sumnt(int n){
   if (n == 2){
    return 2;
   }
   if(is_prime(n)){
   return n + sumnt(n-1);
   }
   return sumnt(n-1);
}
