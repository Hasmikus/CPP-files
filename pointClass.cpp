#include <iostream>
#include "Points.h"
#include <math.h>



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
float Point::distance (Point (int x2, int y2)) {
      return sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
      }

    
    
