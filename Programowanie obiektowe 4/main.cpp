#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point points[10] = {
            Point("P1", 0, 0),
            Point("P2", 10, 20),
            Point("P3", 30, 40)
    };

    cout << "Istnieje " << Point::numberOfPoints() << " punktow."<< endl;

    for (int i = 0; i < 10; i++)
    {
        points[i].show();
    }


    {
        Point p1, p2, p3;
        cout << endl;
        cout << "Teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;
    }

    cout << "A teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;

}