//
// Created by student on 09.06.2025.
//

#include "Triangle.h"
#include <math.h>

Triangle::Triangle(string name, float a) : Figure(name)
{
    m_a = a;
}

float Triangle::Area() const
{
    return ((m_a*m_a*sqrt(3))/4);
}

float Triangle::Perimeter() const
{
    return (3*m_a);
}

void Triangle::Info() const
{
    cout << "Rectangle: " << Name() << endl;
    cout << "Sides length: " << m_a << endl;
    cout << "Area: " << ((m_a*m_a*sqrt(3))/4) << endl;
    cout << "Perimeter: " << (3*m_a) << endl;
}