#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input( string label, int &n);
bool is_prime(int n);
int sumnt(int n);


int main(){
    int n, sum = 0; 
    input("n = ", n);

    cout << "Ket qua la: " << sumnt(n);


    return 0;
}

void input(string label, int &n ){
    cout << label;
    cin >> n;
}


bool is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
            return true;

}

int sumnt(int n){
int result = 0;
for (int i = 2; i <= n; i++){
    if (is_prime(i))
    {
        result += i;
    }
}
 return result;
}
