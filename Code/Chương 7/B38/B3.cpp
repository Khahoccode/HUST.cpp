#include <iostream>
#include <string>
using namespace std;

void input_interger(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void change(int *&arr, int &size, int deleted_element, int changed_element);

int main(){
    int n, x, y;
    input_interger("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_array(numbers, n);
    input_interger("y = ", y);
    input_interger("x = ", x);
    change(numbers, n, x, y);

    print_array(numbers, n);

    return 0;
}
void input_interger(string label, int &n){
    cout << label;
    cin >> n;
}
void input_array(int *arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void print_array(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
void change(int *&arr, int &size, int deleted_element, int changed_element){
   //Tao mang moi, tang kich thuoc
    int new_size = size + 1;
    int *new_array = new int[new_size];

    //Copy mang cu vao mang moi
    for (int i = 0; i < size; i++){
        new_array[i] = arr[i];
    }

     //Duyet nguoc & Them phan tu moi
    for (int i = size; i > deleted_element; i--){
        new_array[i] = new_array[i-1];
    }

     //Gan gia tri y o vi tri x
     new_array[deleted_element] = changed_element;

    //Gan mang moi cho mang cu
    delete[] arr;
    arr = new_array;
    size = new_size;

}
