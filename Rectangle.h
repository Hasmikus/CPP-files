#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle {
	private:
		double width, length;
	public: 
		Rectangle();
		~Rectangle ();
		void set_length (double length1);
		void set_width  (double width1);
		double get_length ();
		double get_width  ();
		double perimeter ();
		double area ();
};

Rectangle::Rectangle() {
		}
Rectangle::~Rectangle() {
		}
void Rectangle::set_length (double length1) {
		if (length1>0.0 && length1<=20.0) {
		length=length1;
		}
		else cout<<"Number isn't in [0.0,20.0]";
		}
void Rectangle::set_width (double width1) {
		if (width1>0.0 && width1<=20.0) {
		width=width1;
		}
		else cout<<"Number isn't in [0.0,20.0]";
		}
double Rectangle::get_length () {
		return length;
		}
double Rectangle::get_width () {
		return width;
		}
double Rectangle::perimeter  () {
		return 2*(width+length);
		}
double Rectangle::area	() {
		return width*length;
		}
#endif
		
		

	
