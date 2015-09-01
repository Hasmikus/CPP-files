#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int rotation(int );
int result,rotatednum;

int main(){ 
    int numb,numb2,numb3; 
    cout<<"\nInput any integer number ";
    cin>>numb;  
    cout<<"\nThe rotate number is "<<rotation(numb);
    
    cout<<"\nInput any integer number ";
    cin>>numb2;  
    cout<<"\nThe rotate number is "<<rotation(numb2);
    
    cout<<"\nInput any integer number ";
    cin>>numb3;  
    cout<<"\nThe rotate number is "<<rotation(numb3);
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
        else { 
             result=rotatednum;
             rotatednum=0;
             return result;
             
        }
}
