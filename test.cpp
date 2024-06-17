#include <stdio.h>
#include <math.h>
int main() {
	double x,y,n,r,ans,rPow;
	scanf("%lf %lf %lf",&x,&y,&n);
	if(y != 0){
		r = (double)y/x;
		rPow = pow(r,n-1);
	ans = x*(rPow);
	printf("%.6lf",ans);
	}
	else{
		printf("ERROR");
	}
	return 0;
}
