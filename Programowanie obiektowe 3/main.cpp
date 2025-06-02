#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    //Point p1, p2, p3;
    Point p1("P1", 0, 0);
    Point p2("P2", 30, 40);

    p1.show();
    p2.show();

    cout << "Odleglosc pomiedzy punktami wynosi " << p1.distance(p2) << endl;
    const Point& p = p1.distant(p2);
    cout << "Punkt bardziej oddalonny od poczatku ukladu wspolrzednych to: " << endl;
    p.show();

}