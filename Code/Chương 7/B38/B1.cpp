#include <iostream>
#include <string>
using namespace std;

void input_interger(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int *&arr, int &size, int new_element);

int main(){
    int n, x;

        //Nhap n
    input_interger("n = ", n);
    int *numbers = new int[n];

        //Cap phat mang dong Stack
     cout << "Nhap mang: ";
    input_array(numbers, n);

        // Nhap x
    input_interger("x = ", x);
    push(numbers, n, x);
    cout << "Mang sau khi them: ";
    print_array(numbers,n);
    return 0;
}

void input_interger(string label, int &n){
    cout << label;
    cin >> n;

}
void input_array(int *arr, int size){
    for( int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void print_array(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
void push(int *&arr, int &size, int new_element){
// Tao mang moi
int new_size = size + 1;
int *tmp_array = new int[new_size];


//Copy toan bo mang moi
for(int i = 0; i < size; i++){
    tmp_array[i] = arr[i];
}
//Them phan tu moi vao cuoi mang moi
    tmp_array[new_size - 1] = new_element;
//Gan mang moi sang con tro cu va tang size len 1 don vi
    delete[] arr;
    arr = tmp_array;
    size = new_size;
}