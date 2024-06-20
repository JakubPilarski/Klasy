//
// Created by Admin on 20.06.2024.
//

#ifndef UNTITLED19_CIRCLE_H
#define UNTITLED19_CIRCLE_H
#include <string>
class Circle{
private:
    static int m_numberFigury;
    std::string m_name;
    double r;
public:
    static int numberFigury();
    Circle();
    Circle(const std::string& name, double x = 0);
    ~Circle();
    void showCircle() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Circle&  bigger(const Circle& t) const;
};
#endif //UNTITLED19_CIRCLE_H
