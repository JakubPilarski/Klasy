//
// Created by Admin on 28.05.2024.
//

#ifndef UNTITLED19_CLASS_H
#define UNTITLED19_CLASS_H
#include <string>
class Triangle
{
private:
    std::string m_name;
    double s1;
    double s2;
public:
    Triangle();
    Triangle(const std::string& name, double x = 0, double y = 0);
    ~Triangle();
    void setName(const std::string& name);
    void sides (double x, double y);
    void showSides() const;
    void showArea() const;
    void showPerimeter() const;

};
#endif //UNTITLED19_CLASS_H
