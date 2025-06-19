#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    Circle circles[5] {
        Circle("c1",0,0,10),
        Circle("c2",0,-10,15)
    };


cout << "Istnieje " << Circle::numberOfCircles<< " okregow "<< endl;

for (int i = 0; i < 5; i++)
{
    circles[i].show();
}

Circle circle3("c3",59,25,12);
    circle3.show();




}