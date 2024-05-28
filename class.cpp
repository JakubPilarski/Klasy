#include <iostream>
#include "class.h"
#include "math.h"
using namespace std;
//" \u200B\u200B"
Triangle ::Triangle() {
    m_name = "???";
    s1 = 0;
    s2 = 0;
}
Triangle::Triangle(const std::string &name, double x, double y) {
    m_name = name;
    s1 = x;
    s2 = y;
}
Triangle::~Triangle(){

}

void Triangle::setName(const std::string &name) {
    m_name = name;
}

void Triangle::sides(double x, double y) {
    s1 = x;
    s2 = y;
}

void Triangle::showSides() const {
    double s3;
    s3 = sqrt((s1 * s1)+(s2*s2));
            cout << "First adjoining = " << s1 << " Second adjoining = " << s2 << " hypotenuse = "<< s3 << endl;
}
void Triangle::showArea() const {
    double p;
   p = (s1*s2)/2;
   cout << "Area of the triangle = " << p << endl;

}
void Triangle::showPerimeter() const {
    double s3;
    double Pe;
    s3 = sqrt((s1 * s1)+(s2*s2));
    Pe = s1 + s2 + s3;
    cout << "Perimeter of the triangle = " << Pe << endl;

}
Rectangle:: Rectangle(){
    m_name = "???";
    s1 = 0;
    s2 = 0;
}
Rectangle::Rectangle(const std::string &name, double x, double y) {
    m_name = name;
    s1 = x;
    s2 = y;
}

void Rectangle::showAreaRe() const {
    double p;
    p = s1*s2;
    cout << "Area of the rectangle = " << p << endl;
}

void Rectangle::showPerimeterRe() const {
    double Pe;
    Pe = 2*s1+2*s2;
    cout << "Perimeter of the Rectangle = " << Pe << endl;
}

void Rectangle::showSidesRe() const {
    cout<<"First side of the rectangle = " << s1 << " Second side of the rectangle = " << s2 << endl;
}
Rectangle::~Rectangle() {

}

