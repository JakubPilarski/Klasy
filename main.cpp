#include <iostream>
#include "class.h"
using namespace std;
void menu(){
    cout<<" 1 - Triangle"<< endl;
    cout<<" 2 - Rectangle "<< endl;
    cout<<" 3 - Circle "<< endl;
    cout<<" 4 - Stop Program "<< endl;
}
int main() {
    double x;
    double y;
    double a;
    double b;
    char textt[10] = " ";
    char text[10] = " ";
    int c = 0;
    while(c!=4){
     menu();
    cout<<"Eneter your choice";
    cin >> c;
    if(c==1){
        cout<<"First"<<endl;
        triangle(&x,&y);
        cout << endl;
        name(text);
        cout<<"Second"<<endl;
        triangle(&a,&b);
        cout << endl;
        name(textt);
        Triangle t1(text ,x,y);
        Triangle t2(textt ,a,b);
        if(x!= 0 && y!= 0 && a!= 0 && b!=0){
            cout<<"There is "<< Triangle::numberFigury()<< " Figure "<< endl;
            t1.name();
        t1.showSides();
        t1.showPerimeter();
        t1.showArea();
        cout << endl;
            t2.name();
            t2.showSides();
            t2.showPerimeter();
            t2.showArea();
            const Triangle& t = t1.bigger(t2);
            cout<< "The biggest is "<< endl;
        t.name();

        }
        else{
            cout<<"Sides can not be 0"<<endl;
        }
    }
   else if(c == 2){
        cout<<"First"<<endl;
        rectangle(&x,&y);
        cout << endl;
        name(text);
        cout<<"Second"<<endl;
        rectangle(&a,&b);
        cout << endl;
        name(textt);
        Rectangle r1(text,x,y);
        Rectangle r2(textt,a,b);
        if(x!= 0 && y!= 0  && a!= 0 && b!=0 ){
            cout<<"There is "<< Rectangle::numberFigury()<< " Figure "<< endl;
            r1.name();
        r1.showSides();
        r1.showPerimeter();
        r1.showArea();
            cout << endl;
            r2.name();
            r2.showSides();
            r2.showPerimeter();
            r2.showArea();
           const Rectangle& r = r1.bigger(r2);
            cout<< "The biggest is "<< endl;
           r.name();
        cout << endl;}
        else{
            cout<<"Sides can not be 0"<<endl;
        }
    }
   else if ( c == 3){
        cout<<"First"<<endl;
        circle(&x);
        cout << endl;
        name(text);
        cout<<"First"<<endl;
        circle(&y);
        cout << endl;
        name(textt);
        Circle c2( textt,y);
        Circle c1( text,x);
        if(x!= 0 && y!=0){
            cout<<"There is "<< Circle::numberFigury()<< " Figure "<< endl;
            c1.name();
        c1.showCircle();
        c1.showPerimeterCi();
        c1.showAreaCi();
            cout << endl;
        c2.name();
        c2.showCircle();
        c2.showPerimeterCi();
        c2.showAreaCi();
        const Circle& c = c1.bigger(c2);
            cout<< "The biggest is "<< endl;
        c.name();
        }
        else{
            cout<<"Radius can not be 0"<< endl;
        }
    }
   else if ( c == 4 )
    {
        break;
    }
    else {
        cout<<"Wrong Choice"<< endl;
    }
    }
    return 0;
}
