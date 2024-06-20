//
// Created by Admin on 20.06.2024.
//

#ifndef UNTITLED19_RECTANGLE_H
#define UNTITLED19_RECTANGLE_H
#include <string>
class Rectangle {
private:
    static int m_numberFigury;
    std::string m_name;
    double s1;
    double s2;
public:
    static int numberFigury();
    Rectangle();
    Rectangle(const std::string& name, double x = 0, double y = 0);
    ~Rectangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Rectangle& bigger(const Rectangle& t) const;
};
#endif //UNTITLED19_RECTANGLE_H
