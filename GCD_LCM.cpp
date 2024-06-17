#include <stdio.h>
#include <math.h>
int main() {
	int a, b, gcd=1, lcm;
	scanf("%d %d",&a,&b);
	
	int x = abs(a), y = abs(b);
	 
	 while(y != 0)
   {
       int t = y;
       y = x%y;
       x = t;
   }
   gcd = x;
   lcm = (a*b) / gcd;

   printf("%d %d",abs(gcd),abs(lcm));
    return 0;
}

