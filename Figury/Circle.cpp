//
// Created by student on 09.06.2025.
//

#include "Circle.h"
#include <cmath>

Circle::Circle(string name, float a) : Figure(name)
{
    m_a = a;
    m_area = M_PI*m_a*m_a;
    m_perimeter = 2 * M_PI * m_a;
}

float Circle::Area() const
{
    return m_area;
}

float Circle::Perimeter() const
{
    return m_perimeter;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Radius: " << m_a << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;

}

