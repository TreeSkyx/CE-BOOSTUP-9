#include <stdio.h>
#include <math.h>

int main() {
	float x,y,n,r,ans,rPow;
	scanf("%f %f %f", &x, &y, &n);
	
	if(x == 0 || n == 0)
	{
		printf("ERROR");
	}else {
		
	r = y/x;
	rPow = pow(r,n-1);
	ans = x*rPow;
	printf("%.6f",ans);
	}
	return 0;
}

