#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class Point {
      int x,y;
   public: 
      void set_x (int);
      void set_y (int);
      int put_x ();
      int put_y ();
      }
void Point::set_x(int x1) { 
      x=x1; 
     }
void Point::set_y (int y1) {
     y=y1;
     }
void Point::put_y () { 
      return y; 
      }
void Point::put_x () { 
      return x; 
      }

class Rectangle: public Point { 
      int width, length;
      public: 
              int set_width,length (void Point A.put_x(), void Point A.put_y(), 
                                   void Point B.put_x(), void Point B.put_y(), 
                                   void Point C.put_x(), void Point C.put_y());
              int perimeter(int width, int length);
              void put_width (); 
              void put_length ();
              int area(int width, int length);
              void sameArea(Rectangle);
}
int Rectangle:Point::set_width,length (int Point A.set_x(), int Point A.set_y(), 
                                      int Point B.set_x(), int Point B.set_y(), 
                                      int Point C.set_x(int), int Point C.set_y(int)) {
                                          width=sqrt(sqr(A.set_x(int)-B.set_x(int))+sqr(A.set_y(int)-B.set_y(int)));
                                          length=sqrt(sqr(C.set_x(int)-B.set_x(int))+sqr(C.set_y(int)-B.set_y(int)));
                                          }
void parimeter (int width, int length) { 
                   return 2*(width+length) 
                   }
void area(int width, int length) {
                    return width*length 
                    } 
int main() {
    cout<<"\nCoordinates of A point ";
    cin>>x1;
    A.set_x(int x1);
    cin>>y1;
    A.set_y(int y1);
    cout<<"\nCoordinates of B point ";
    cin>>x2;
    B.set_x(int x2);
    cin>>y2;
    B.set_y(int y2);
    cout<<"\nCoordinates of C point ";
    cin>>x3;
    C.set_x(int x3);
    cin>>y3;
    C.set_y(int y3);
Rectangle First.(set
    
                                      
              

