#include <iostream>
#include <conio.h>
using namespace std;

int **matr (int n,int m) {
    int **ptr;
    
    ptr = new int *[n]; 
    
    for (int i=1; i<n; i++) {
      ptr[i] = new int [m];
      for (int j = 1; j<m; j++)
      if (i = j) ptr[i][j] = 1; else ptr[i][j]=0;
    }
}

int main () {
    int n1, m1, **matrix;
    
    cout<<"\n n= "; cin>>n1;
    cout<<"\n m= "; cin>>m1;
    
    matrix =  matr(n1, m1);
    for (int i=1; i<n1; i++) 
     for (int j=1; j<m1; j++) cout<<"\t "<< matrix[i][j];
          
 getch();
 return(0);
 
}
