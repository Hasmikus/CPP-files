#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>


class Rectangle {
	private:
		double width, length;
	public: 
		Rectangle(width, length);
		~Rectangle ();
		void set_length (double length1);
		void set_width  (double width1);
		double get_length ();
		double get_width  ();
		double perimeter (double width,double length);
		double area (double width,double length);
}

Rectangle::Retangle(width,length) {
		};
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
		return width
		}
double Rectangle::perimeter  (double width, double length) {
		return 2*(width+length);
		}
double Rectangle::area	(double width, double length) {
		return width*length;
		}
#endif
		
		

	
