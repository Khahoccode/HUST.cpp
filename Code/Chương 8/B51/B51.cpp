#include <iostream>
#include <string>
using namespace std;

class Point{
    public:
    int x, y;
    Point(){}
    Point (int x, int y){
        this->x = x;
        this->y = y;
    }

    friend Point operator+(Point p1, Point p2){
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;
    }


};

int main(){
    Point p1(1,2), p2(3,4);
    Point p3 = p1 + p2;
    cout << "p3 = " << p3.x << "," << p3.y << endl;

    return 0;
}