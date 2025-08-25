#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fs;
    fs.open("/Users/loinhoi/Documents/Kha.rtf");
    if (!fs.is_open()){
        return 1;
    }
    fs << "Hello World";
    return 0;
}