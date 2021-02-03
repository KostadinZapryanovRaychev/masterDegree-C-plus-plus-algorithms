#include<iostream>
#include<windows.h>
#include <cstdlib>
using namespace std;
int gcd(int x, int y)
{
    x= 2*x;
	y= 2*y;
	cout << x <<endl << y <<endl;
		
}
int main() 
{
cout << "a = , b= ";
int a, b;
cin >> a ;
cin >> b; 
gcd(a, b);
system ("pause");
return 0;
}

