#include <iostream>
#include "class.h"
#include "math.h"
using namespace std;
//" \u200B\u200B
int Triangle::m_numberFigury = 0;
int Rectangle::m_numberFigury = 0;
int Circle::m_numberFigury=0;
Triangle ::Triangle() {
    m_name = "???";
    s1 = 0;
    s2 = 0;
}
Triangle::Triangle(const std::string &name, double x, double y) {
    m_name = name;
    s1 = x;
    s2 = y;
    m_numberFigury++;
}
Triangle::~Triangle(){
    m_numberFigury--;
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
int Triangle::numberFigury() {
    return m_numberFigury;
}
void Triangle::name() const {
    cout<<m_name<<endl;
}
const Triangle& Triangle:: bigger(const Triangle& t) const {
double d =(s1*s2)/2;
double dp = (t.s1*t.s2)/2;
    if (d > dp){
        return *this;}
    return t;
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
    m_numberFigury++;
}
int Rectangle::numberFigury() {
    return m_numberFigury;
}

void Rectangle::showArea() const {
    double p;
    p = s1*s2;
    cout << "Area of the rectangle = " << p << endl;
}

void Rectangle::showPerimeter() const {
    double Pe;
    Pe = 2*s1+2*s2;
    cout << "Perimeter of the Rectangle = " << Pe << endl;
}

void Rectangle::showSides() const {
    cout<<"First side of the rectangle = " << s1 << " Second side of the rectangle = " << s2 << endl;
}
Rectangle::~Rectangle() {
    m_numberFigury--;
}
void Rectangle::name() const {
    cout<<m_name<<endl;
}
const Rectangle& Rectangle:: bigger(const Rectangle& t) const {
    double d =s1*s2;
    double dp = t.s1*t.s2;
    if (d > dp){
        return *this;}
    return t;
}

Circle::Circle() {
    m_name = "???";
    r = 0;
}
Circle::Circle(const std::string &name, double x) {
    m_name = name;
    r = x;
    m_numberFigury++;
}
Circle::~Circle() {
    m_numberFigury--;
}
int Circle::numberFigury() {
    return m_numberFigury;
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
void Circle::name() const {
    cout<<m_name<<endl;
}
const Circle& Circle:: bigger(const Circle& t) const {
    double d =3.14*r;
    double dp = 3.14*t.r;
    if (d > dp){
        return *this;}
    return t;
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
void name(char *text){
    cout<<"Enter Name : "<< endl;
    cin>>text;
}
