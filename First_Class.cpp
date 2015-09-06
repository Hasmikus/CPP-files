#include <iostream>
#include <conio.h>
using namespace std;
struct Qarhav
 {
        private:
                int x, y;
        public:
               Qarhav (int);
               int putx();
               int puty();
               void sqr();
               ~Qarhav();
};
Qarhav :: Qarhav(int x1) {x=x1;}
int Qarhav :: putx() {return x;}
int Qarhav :: puty() {return y;}
void Qarhav :: sqr() {y=x*x;}
Qarhav::~Qarhav (){} 

int main ()
 {
     int s, a, b;
     cout<<"\n Input a, b\n";
     cin>>a>>b;
     Qarhav A(a);
     A.sqr();
     s=A.puty()+A.putx() +b;
     cout<<"s="<<s;
     
 A.Qarhav ::~Qarhav();
 getch();
}
