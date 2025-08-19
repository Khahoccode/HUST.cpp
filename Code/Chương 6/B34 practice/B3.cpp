#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input(string labels, int &n);
long long giaithua(int n);

int main(){
    int n;
    input("n = ", n);
    cout << n << "! = "  << giaithua(n);
    return 0;
}

void input(string labels, int &n){
    cout << labels;
    cin >> n;
}

long long result = 1;
long long giaithua(int n){
    for (int i = 1; i <= n; i++){
        result *= i;
    }
            return result;
}