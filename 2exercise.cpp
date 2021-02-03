#include<iostream>
#include<windows.h>
using namespace std;
int koko(int x, string y)
{	
    double lv = x*0.51129;
	double euro= 1.95583*x;
	string str1 ("lv-euro");
    string str2 ("euro-lv");
   if ( y.compare(str1) == 0 ) 
   {
	cout << lv <<endl;
   }
   else if ( y.compare(str2) == 0)
   {
	   cout << euro <<endl;
   }
else 
{cout << "no";
}	
}
int main() {
    int a;
    string b;
cout << "a, b= ";
cin >> a >> b; 
koko(a, b);
system ("pause");
return 0;
}

