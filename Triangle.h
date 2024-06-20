//
// Created by Admin on 28.05.2024.
//

#ifndef UNTITLED19_TRIANGLE_H
#define UNTITLED19_TRIANGLE_H
#include <string>
class Triangle
{
private:
    static int m_numberFigury;
    std::string m_name;
    double s1;
    double s2;
public:
    static int numberFigury();
    Triangle();
    Triangle(const std::string& name, double x = 0, double y = 0);
    ~Triangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Triangle& bigger(const Triangle& p) const;
};



#endif //UNTITLED19_TRIANGLE_H
