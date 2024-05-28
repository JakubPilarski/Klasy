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

Circle::Circle() {
    m_name = "???";
    r = 0;
}
Circle::Circle(const std::string &name, double x) {
    m_name = name;
    r = x;
}
Circle::~Circle() {

}

void Circle::showCircle() const {
    cout<<"radius of the circle = "<< r << endl;
}

void Circle::showPerimeterCi() const {
    double l;
    l = 2*3.14*r;
    cout << "Perimeter of the Circle = " << l << endl;
}

void Circle::showAreaCi() const {
    double p;
    p = 3.14*r;
    cout << "Area of the rectangle = " << p << endl;
}
void triangle (double *x,double *y){
    cout << "Triangle" << endl;
    cout << "First adjoining of your triangle =  ";
    cin >> * x;
    cout << endl;
    cout << "Second adjoining of your triangle =  ";
    cin >> * y;
    cout << endl;
}
void rectangle (double *x,double *y){
    cout << "Rectangle" << endl;
    cout << "First side of your rectangle =  ";
    cin >> * x;
    cout << endl;
    cout << "Second side of your rectangle =  ";
    cin >> * y;
    cout << endl;
}
void circle (double *x){
    cout << "Circle" << endl;
    cout<< "Radius of your circle = ";
    cin >> * x;
    cout << endl;
}

