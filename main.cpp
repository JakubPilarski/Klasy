#include <iostream>
#include "class.h"
using namespace std;
int main() {
    double x;
    double y;
    cout << "Triangle" << endl;
    cout << "First adjoining our your triangle =  ";
    cin >> x;
    cout << endl;
    cout << "Second adjoining our your triangle =  ";
    cin >> y;
    cout << endl;
    Triangle t1("T1",x,y);
    t1.showSides();
    t1.showPerimeter();
    t1.showArea();
    cout << endl;
    cout << "Rectangle" << endl;
    cout << "First side our your rectangle =  ";
    cin >> x;
    cout << endl;
    cout << "Second side our your rectangle =  ";
    cin >> y;
    cout << endl;
    Rectangle r1("R1",x,y);
    r1.showSidesRe();
    r1.showPerimeterRe();
    r1.showAreaRe();
    return 0;
}
