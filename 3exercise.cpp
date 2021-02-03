#include <iostream>
#include <cstdlib>
using namespace std;
 
int rec(int a, int b) {
  cout<<"Proverqvame "<< a  << endl;
  if(a < 10)
    return (a==b);
  else if(b==(a%10))
    return true;
  else return rec(a/10, b);
}
 int main(int argc, char *argv[]) {
  int a, b;
  cout<<"Vyvejdane na chislo i tyrsenata cifra: ";
  cin>>a>>b;
  if (rec(a, b))
	cout<<"V chisloto syshtestvuva tyrsenata cifra\n";
  else cout<<"v chisloto ne syshtestvuva tyrsenata cifra\n";
  system("PAUSE");
 return 0;
    }

