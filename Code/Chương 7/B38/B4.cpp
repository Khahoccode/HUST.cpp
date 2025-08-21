#include <iostream>
#include <string>
using namespace std;

void input_interger(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void bubble(int *&arr, int &size);

int main(){
int n;
    input_interger("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_array(numbers, n);
    bubble(numbers, n);
    print_array(numbers, n);
    return 0;
}

void input_interger(string label, int &n){
    cout << label;
    cin >> n;
}
void input_array(int *arr, int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void print_array(int *arr, int size){
    for( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
void bubble(int *&arr, int &size){
    //Sap xep mang moi theo bubble
    for(int i = size - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
        if(arr[j] > arr[j+1]){
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j + 1] = tmp;
        }
        }
    }

}

