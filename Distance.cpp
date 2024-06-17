#include <stdio.h>
#include <math.h>
int main() {
	double x1,x2,y1,y2,d,xPow,yPow;
	scanf("%lf, %lf",&x1,&y1);
	scanf("%lf, %lf",&x2,&y2);
	
	xPow = pow(x1-x2,2);
	yPow = pow(y1-y2,2);
	
	d = sqrt(xPow+yPow);
	printf("%lf",d);
	return 0;
}

