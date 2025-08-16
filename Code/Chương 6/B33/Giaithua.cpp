#include <iostream>
using namespace std;

int interger(int n){
    if (n == 1){
    return 1;
    }
    return n*interger(n-1);

}

int main(){
    int n = 5;
    cout << interger(n);
    return 0;
}