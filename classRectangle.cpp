#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Point {
      public:
             int x,y;
      public: 
              Point (int, int);     
              int putx ();
              int puty ();
};

Point::Point(int x1, int  y1) { 
      x=x1;
      y=y1; 
      }
int Point::puty () { 
      return y; 
      }
int Point::putx () { 
      return x; 
      }

class Rectangle: public Point { 
      float width, length;
      public: 
              Rectangle (int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
                    :Point(x,y) {
                    Point A(x1, y1);
                    Point B(x2, y2);
                    Point C(x3,y3);
                    Point D(x4, y4);
                    };
              float perimeter(float width,float length);
              float put_width(); 
              float put_length();
              void setWidth (int ,int , int , int );
              void setLength (int ,int , int , int );
              float area(float , float );
              
};

void Rectangle::setWidth (int x1,int y1, int x2, int y2) {
                   width=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
                   }  
void Rectangle::setLength (int x1,int y1, int x4, int y4) {
                   length=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
                   }       
float Rectangle::put_width(){
                    return width;
                   } 
float Rectangle::put_length() {
                    return length;
                   }  
float Rectangle::perimeter (float width,float length) { 
                   return 2*(width+length); 
                   }
float Rectangle::area(float width,float length) {
                    return width*length;  
                   } 

int main() {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cout<<"\nInput coordinates for the 4 edges of rectangle. For example 0 1"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Rectangle R1(x1,y1,x2,y2,x3,y3,x4,y4);
    R1.setWidth(x1, y1, x2, y2);
    R1.setLength(x1,y1, x4, y4);


    cout<<"----------------------"<<endl;
    cout<<"The coordinates of rectangle edges: (" <<x1<<";"<<y1<<"),"<<"("<<x2<<";"<<y2<<"),";
    cout<<"("<<x3<<";"<<y3<<"),"<<"("<<x4<<";"<<y4<<")"<<endl;
    cout<<"Width ="<<R1.put_width()<<"  Length="<<R1.put_length()<<endl;
    cout<<"Perimeter = "<<R1.perimeter(R1.put_width(), R1.put_length())<<endl;
    cout<<"Area= "<<R1.area(R1.put_width(),R1.put_length())<<endl;

getch();
return 0;
}


    
                                      
              

