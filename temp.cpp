#include <stdio.h>
int main(){
	double f,m,a;
	scanf("%lf %lf",&m,&a);
	if(m == 0){
		printf("ERROR");
	}
	else{
		f=(double)m*a;
		printf("%.6lf = %.6lf x %.6lf",f,m,a);
	}

	return 0;
}
