#include <stdio.h>
int main() {
	double area,w,l;
	scanf("%lf %lf",&w,&l);
	area = (double)w*l;
	if(w <=0 || l <= 0 ){
	printf("Error");
	}
	else {
	printf("Area = %lf x %lf = %lf",w,l,area);
	}
	return 0;
}
