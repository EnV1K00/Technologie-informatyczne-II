#include <iostream>
#include <math.h>
#include "Circle.h"

int Circle::m_numberOfCircles = 0;




Circle::Circle() {
    m_name = "bez nazwy";
    m_x = 0;
    m_y = 0;
    Circle::m_numberOfCircles++;
}

Circle::Circle(const std::string& name, double x, double y, double radius) {
    m_name = name;
    m_x = x;
    m_y = y;
    m_radius = radius;
    Circle::m_numberOfCircles++;
}

Circle::~Circle() {
    Circle::m_numberOfCircles--;
}

void Circle::setName(const std::string& name) {
    m_name = name;
}

void Circle::setXY(double x, double y) {
    m_x = x;
    m_y = y;
}
void Circle::setRadius(double radius) {
    m_radius = radius;
}
double Circle::getX() {
    return m_x;
}

double Circle::getY() {
    return m_y;
}

void Circle::show() const {
    std::cout << "Circle: " << m_name << "(" << m_x << ", " << m_y << ")" << " radius: "<< m_radius << std::endl;
}

double Circle::area(const Circle& p) const {
    return M_PI * p.m_radius * p.m_radius;
}
double Circle::obwod(const Circle& p) const {
    return 2 * M_PI * p.m_radius;
}


int Circle::numberOfCircles() {
    return Circle::m_numberOfCircles;
}//
// Created by MAFILYW on 08.06.2025.
//
