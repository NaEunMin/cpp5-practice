/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Circle{
  int radius;
  public:
  Circle(){radius = 1;}
  Circle(int radius){this->radius=radius;}
  void swap(Circle& c1,Circle& c2);
  int getRadius(){return radius;}
};

/*class Circle {
	int radius;
public:
	Circle():Circle(1) {}
	Circle(int r) { this->radius = r; }
void Circle::swap(Circle &c1,Circle &c2){
    Circle tmp;
    tmp=c1;
    c1=c2;
    c2=tmp;
}
*/

int main()
{
    Circle circle1(1);
    Circle circle2(2);
    cout << circle1.getRadius() << ' ' << circle2.getRadius() << endl;
    
    swap(circle1, circle2);
    
    cout << circle1.getRadius() << ' ' << circle2.getRadius() << endl;
    return 0;
}
