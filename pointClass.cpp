
#include "point.h"
#include <cmath>
#include <iostream>



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
float Point::distance (Point *B(x2, y2)) {
      return sqrt((x-B->putx())*(x-B->putx())+(y-B->puty())*(y-B->puty()));
      }

    
    
