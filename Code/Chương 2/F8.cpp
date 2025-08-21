#include <iostream> 
using namespace std; 
int main() 
{ 
   int a = 10; int b= 20;
   bool c = a < b;
   bool d = a == b;
   bool e = a >= b;
   bool f = !a ;
   bool g = a != b; 
    std::cout << "c=" << c << std::endl;
    std::cout << "d=" << d << std::endl;
    std::cout << "e=" << e << std::endl;
    std::cout << "f=" << f << std::endl;
    std::cout << "g=" << g << std::endl;
return 0; 
}