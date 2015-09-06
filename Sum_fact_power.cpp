#include <iostream>
#include <conio.h>
using namespace std;

int countFact (int h);         // Function that counts the factorial of h.
int countPower (int h, int dag); //  Function that counts h in dagree dag.

int main () {
    float a, sum;
    int x, i;
    
cout<<"\nx= ";
cin>>x;
   sum=0;
   for (i=1; ; i++) {
        a=countPower(x, i) / countFact(i);
        if (a>-10000 && a<10000) break;
        else sum=sum+a;
   }
cout<<"sum= "<<sum;
getch();
}

 
int countFact (int h) { 
    int fact, i;
    
    for (i=h, fact=1; i>=1; i--) fact=fact*i;
    
    return fact;
}

int countPower (int h, int dag) {   
    int j, power;
 
    for (j=1, power=1; j<=dag; j++) power=power*h;
 
    return power;
}


 
