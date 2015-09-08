#include <iostream>
#include <ncurses.h>
#include "Rectangle.h"

using namespace std;

int main () {
double width2, length2;
	std::cout<<"\nInput width and length of rectangle. They must be double numbers in [0.0, 20.0].";
	std::cin>>width2>>length2;
	
	Rectangle A;
	A.set_length(length2);
	A.set_width(width2);
	
	std::cout<<"\nWidth = "<<A.get_width();
	std::cout<<"\nLength = "<<A.get_length();
	std::cout<<"\nPerimeter = "<<A.perimeter();
	std::cout<<"\nArea = "<<A.area();

getch();
return 0;
}
