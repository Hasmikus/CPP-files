#ifndef Point_h
#define Point_h

class Point {
      private:
             int x,y;
      public: 
              Point (int x1, int y1); 
              ~Point();    
              int putx ();
              int puty ();
              float distance (Point (int x2, int y2));
}

#endif
