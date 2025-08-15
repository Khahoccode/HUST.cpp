#include <iostream>
using namespace std;

float avg(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];

}
return (float) sum/n;
}


int main(){
int arr[10] = {1, 2, 3, 4};

cout << avg(arr, 4);

    return 0;
}