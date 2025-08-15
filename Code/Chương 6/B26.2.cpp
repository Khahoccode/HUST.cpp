#include <iostream>
using namespace std;

int sum = 0;
float avg(int arr[][3],int n, int m){
    for(int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
         sum += arr[i][j];
        }
    }
    return (float) sum/(m*n);

}

int main(){
int numbers[2][3] = {
{1, 2, 3},
{4,5, 6}
};

cout << avg(numbers, 2, 3);

    return 0;
}