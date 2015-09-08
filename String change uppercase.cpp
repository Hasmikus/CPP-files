#include <iostream>
#include <conio.h>

using namespace std;

void strtoupper(char *str)
 {
    for(int i=0; str[i]!='\0'; i++) 
    {
        if (str[i]>=97 && str[i]<=122)//a-z
           {
            str[i]-=32;
           }  
    }
    cout<<str;
 }
 
int main ()
{

    int i;
    char string[100];

    cout<<"\nEnter the string with lowercase letters"<<endl;
    cin>>string;

    cout<<"String with uppercases ";
    strtoupper(string);

    getch();
    return 0;
    
}

