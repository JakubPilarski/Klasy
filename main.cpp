#include <iostream>
#include "class.h"
using namespace std;
int main() {double ts1;
    double ts2;
    cout << "First adjoining our your triangle =  ";
    cin >> ts1;
    cout << endl;
    cout << "Second adjoining our your triangle =  ";
    cin >> ts2;
    cout << endl;
    Triangle t1("T1",3,4);
    t1.showSides();
    t1.showPerimeter();
    t1.showArea();
    return 0;
}
