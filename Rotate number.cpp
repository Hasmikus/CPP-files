#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int balance, number, newnumber;
    cout<<"\nInput any integer number ";
    cin>>number;
    newnumber=0;
    while (balance!=0) {
          balance=number%10;
          newnumber+=balance;
          number=(number-balance)/10;
          if (number%10!=0) {newnumber*=10;} 
          }
    cout<<"\nThe rotate number is "<<newnumber;
    getch();   
}
