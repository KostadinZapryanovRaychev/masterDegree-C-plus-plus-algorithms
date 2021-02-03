#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int main(int argc, char *argv[])
{
SetConsoleOutputCP(1251);
double a;
double v;
double t;
double s;
cout<<"Enter velocity\n";
 cin>>v;
cout<<"Enter acceleration\n";
 cin>>a;
 /*double s=v*t;
  double s= a*((t*t)/2);*/
  s = (2*v*v)/a;
 cout<<"The path of the car after the lights is\n"<<s;
 t=s/v;
	cout<<"\The time needed for a car to reach the truck\n"<<t;
 
system("PAUSE");
return 0;
}


