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
         rotatednumb=0;    
          while ((number-number%10)/10!=0) { 
                balance=number%10; 
                number=(number-balance)/10;
                rotatednumb=rotatednumb*10+balance;
           }; 
           rotatednumb=rotatednumb*10+number;
           return rotatednumb;
              
    }
