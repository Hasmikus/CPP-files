#include <iostream>
#include <conio.h>
using namespace std;
int rotation(int ); 
int rotatednumb;

int main(){ 
    int numb; 
    cout<<"\nInput any integer number ";
    cin>>numb;  
    cout<<"\nThe rotate number is "<<rotation(numb);
    getch();
}
    int rotation(int number){ 
         int balance;  
         balance=number%10;  
          if ((number-balance)/10!=0) { 
                rotatednumb=balance*10+rotation((number-balance)/10);      
          } else return rotatednumb;
              
    }
