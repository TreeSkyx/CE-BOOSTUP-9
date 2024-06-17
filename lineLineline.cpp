#include <stdio.h>

int main() {
	float x1,x2,y1,y2,m,c;
	scanf("%f %f",&x1,&y1);
	scanf(",%f %f",&x2,&y2);
	
	m = (float)(y2-y1)/(x2-x1);
	c = (-m*x1)+y1;
	
	printf("y=%.2fx+%.2f",m,c);
	return 0;
}
