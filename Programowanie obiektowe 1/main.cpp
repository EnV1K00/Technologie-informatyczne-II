#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1, p2, p3;

    p1.setName("P1");
    p1.setXY(10, 20);
    p2.setXY(30, 40);

    p1.show();
    p2.show();
    p3.show();
}