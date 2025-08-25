#include <iostream>
#include <string>
using namespace std;

struct Product
{
    string name;
    int price;
    int quantity;

    friend istream& operator >> (istream &is, Product &product){
        cout << "Nhap ten: ";
        getline (is, product.name);
        cout << "Nhap don gia: ";
        is >> product.price;
        cout << "Nhap so luong: ";
        is >> product.quantity;

        return  is;
    };

    friend ostream& operator << (ostream &os, Product product){
    os << "Ten: " << product.name;
    os << ", don gia: " << product.price;
    os << ", so luong: " << product.quantity;
    return os;
}
};


int show

int main(){
    Product product;
    cin >> product;
    cout << product;
    return 0;
}