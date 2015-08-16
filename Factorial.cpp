#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int x, y, i;
    
cout<<"\nx= ";
cin>>x;

for (i=x, y=1; i>=1; i--) y=y*i;
    
cout<<"y=x!= "<<y;     
    
 getch();  
 return(0);   
}
