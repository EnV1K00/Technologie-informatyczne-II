//
// Created by Rafal Nowak on 28/05/2022.
//

#ifndef INHERITANCE_SQUARE_H
#define INHERITANCE_SQUARE_H


#include "Figure.h"

class Square : public Figure
{
private:
    float m_a;
    float m_area;
    float m_perimeter;

public:
    Square(string name = "", float a = 0);
    virtual ~Square() {}
    virtual float Area() const;
    virtual float Perimeter() const;
    virtual void Info() const;
};


#endif //INHERITANCE_SQUARE_H
