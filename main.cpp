#include <iostream>
#include "class.h"
using namespace std;
int main() {
    Triangle t1 = Triangle("T1",3,4);
    t1.showSides();
    t1.showPerimeter();
    t1.showArea();
    return 0;
}
