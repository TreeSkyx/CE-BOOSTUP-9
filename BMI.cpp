#include <stdio.h>
#include <math.h>

int main() {
	double kg,h,bmi,hPow,hm;
	scanf("%lf %lf",&kg,&h);
	
	hm = (double)h/100;
	hPow = pow(hm,2);
	bmi = (double)kg/hPow;
	printf("%lf\n",bmi);
	
	if(bmi>30) printf("Obesity");
	else if(bmi>=25 && bmi<30) printf("Overweight");
	else if(bmi>=18.5 && bmi<25) printf("Normal");
	else printf("Underweight");
	return 0;
}
