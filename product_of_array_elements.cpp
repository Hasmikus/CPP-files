#include <iostream>
#include <conio.h>
using namespace std;

int main (void) {
    int n, i, P, *x;
    cout <<"\nSize of array : "; cin>>n;
    x=new int[n];
    
    for(i=1, P=1; i<=n; i++) { 
             cout<<"x["<<i<<"]="; cin>>x[i];
             P*=(1+x[i]); 
    } 
    cout<<"P = "<<P;
    getch();
    return 0;
}
