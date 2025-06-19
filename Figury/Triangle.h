//
// Created by student on 09.06.2025.
//

#ifndef INHERITANCE_TRIANGLE_H
#define INHERITANCE_TRIANGLE_H


#include "Figure.h"

class Triangle : public Figure
{
private:
    float m_a;
    float m_area;
    float m_perimeter;

public:
    Triangle(string name = "", float a = 0);
    virtual ~Triangle() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif //INHERITANCE_TRIANGLE_H