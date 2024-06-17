#include<stdio.h>
#include<math.h>
int main() 
{
    double ans,d,r,rPow,pi = 3.1415926535897932384626433;
    scanf("%lf",&r);
    d = (double)4/3;
    rPow = pow(r,3);
    ans = d*pi*rPow;
    
    printf("%.8lf",ans);
    return 0;
}
