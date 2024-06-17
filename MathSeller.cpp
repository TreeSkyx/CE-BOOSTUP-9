#include <stdio.h>
int main() {
	int a,b,c,d,x,y;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	x = ((a*c)-(b*d));
	y = ((a*d)+(b*c));
	
	printf("(%d)+(%d)i",x,y);
}
