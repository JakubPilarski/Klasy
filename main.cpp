#include <iostream>
#include "class.h"
using namespace std;
int main() {
    double x;
    double y;
    triangle(&x,&y);
    Triangle t1("T1",x,y);
    t1.showSides();
    t1.showPerimeter();
    t1.showArea();
    cout << endl;
    rectangle(&x,&y);
    cout << endl;
    Rectangle r1("R1",x,y);
    r1.showSidesRe();
    r1.showPerimeterRe();
    r1.showAreaRe();
    cout << endl;
    circle(&x);
    Circle c1( "C1",x);
    c1.showCircle();
    c1.showPerimeterCi();
    c1.showAreaCi();
    return 0;
}
