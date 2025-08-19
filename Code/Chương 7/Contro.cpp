#include <iostream>
using namespace std;

int main(){
int numbers[4] = { 1, 2, 3, 4};
int *i_ptr ;
for(i_ptr = &numbers[0]; i_ptr < &numbers[0] + 4; i_ptr++){
    cout << *i_ptr << " ";
}
    return 0;
}