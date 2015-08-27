#include <iostream>
#include <conio.h>
using namespace std;
int rotation(int ); 
int rotatednum;

int main(){ 
    int numb; 
    cout<<"\nInput any integer number ";
    cin>>numb;  
    cout<<"\nThe rotate number is "<<rotation(numb);
    getch();
    return 0;
}
    int rotation(int number){
        int balance; 
        
        balance=number%10;
        rotatednum=rotatednum*10+balance;      
          
        if ((number-balance)/10!=0) {
        return rotation((number-balance)/10);           
        } 
        else {return rotatednum; }
              
    }
