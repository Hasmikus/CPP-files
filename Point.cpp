
#include <iostream>
#include <conio.h>
#include "Points.h"

using namespace std;

int main() {
    int x1, y1,x2,y2;
    cout<<"Input coordinates of point A"<<endl;
    cin>>x1>>y1;
    Point A(x1,y1);
    cout<<"Input coordinates of point B"<<endl;
    cin>>x2>>y2;
    Point B(x2,y2);
    
    cout<<"The distance of A and B is "<<A.distance(B(x2,y2));
    
    getch();
    return 0;
}
