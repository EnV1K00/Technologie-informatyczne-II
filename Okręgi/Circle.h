//
// Created by MAFILYW on 08.06.2025.
//
#pragma once
#include <string>

class Circle
{
private:
    static int m_numberOfCircles;
    std::string m_name;
    double m_x;
    double m_y;
    double m_radius;
public:
    static int numberOfCircles();
    Circle();
    Circle(const std::string& name, double x = 0, double y = 0, double radius = 0);
    ~Circle();
    void setName(const std::string& name);
    void setXY(double x, double y);
    void setRadius(double radius);
    double getX();
    double getY();
    double getRadius();
    double area(const Circle& p) const;
    double obwod(const Circle& p) const;
    void show() const;


};