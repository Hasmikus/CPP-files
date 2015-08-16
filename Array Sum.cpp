#include <iostream>
#include <conio.h>
using namespace std;

int main (void){
     int n, i, sum, *mas;
     
     n=10;
     mas=new int[n];
     sum=0;
     for (i=1; i<=n; i++) { 
     cout<<"\nmas["<<i<<"]= ";
     cin>>mas[i];
     sum+=mas[i];
     }
     cout<<"Sum of array is : "<<sum;
     getch();
     return 0;
}
     
     
     
     
