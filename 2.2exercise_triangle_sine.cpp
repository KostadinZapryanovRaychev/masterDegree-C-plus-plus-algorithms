#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
double ax=-2, ay=4, bx=-3, by=2.5, cx=0, cy=2;
double a=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
double b=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
double c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
cout<<"a="<<a;
cout<<"\nb="<<b;
cout<<"\nc="<<c;

float alpha = acos((b*b + c*c - a*a)/(2*b*c)); 
float betta = acos((a*a + c*c - b*b)/(2*a*c)); 
float gamma = acos((a*a + b*b - c*c)/(2*a*b)); 
alpha = alpha * 180 / 3.141592; 
betta = betta * 180 / 3.141592; 
gamma = gamma * 180 / 3.141592; 

double sinA = sin(alpha*3.141592/180.0);
double sinB = sin(betta*3.141592/180.0);
double sinC = sin(gamma*3.141592/180.0);
cout << "\nSinA(" << alpha << ") = " << sinA << endl;
cout << "SinB(" << betta << ") = " << sinB << endl;
cout << "SinC(" << gamma << ") = " << sinC << endl;
 system("pause");
 return 0;

}	

