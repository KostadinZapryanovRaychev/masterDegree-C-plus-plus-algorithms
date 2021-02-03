#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
    
    int n,i,j;
    int sum=0;
    cout<<"Enter n\n";
    cin>>n;
    for (i=1;i<=n;i++)
      {
         sum=0;
         for (j=1;j<i;j++)
         if (i%j==0) sum=sum+j;
         if (sum==i) cout<<i<<endl;
      }
 
    return 0;

}

