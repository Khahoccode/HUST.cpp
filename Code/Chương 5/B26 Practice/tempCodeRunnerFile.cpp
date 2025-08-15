#include <iostream>
#include <string>
using namespace std;
int main (){
    string str;

    cout << "Nhap chuoi: ";
    getline(cin,str);

    int i = 0;
    while(i < str.length()){
        if(str[i] == ' ' && str[i+1] == ' '){
            str.erase(1,0);
        }
        else { 
            i++;
        }
    }

    cout << "Ket qua: " << str;

    return 0;
}