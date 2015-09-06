#include <iostream>
#include <conio.h>
#include "Rectangle.h"

using namespace std;

int main () {
double width2, length2;
	cout"\nInput width and length of rectangle. They must be double numbers in [0.0, 20.0].";
	cin>>width>>length;
	
	Rectangle A(width2, length2);
	A.set_length(length2);
	A.set_width(width2);
	
	cout<<"\nWidth = "<<A.get_width;
	cout<<"\nLength = "<<A.get_length;
	cout<<"\nPerimeter = "<<A.perimeter;
	cout<<"\nArea = "<<A.area;

getch();
return 0;
}
