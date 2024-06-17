#include <stdio.h>
int main() {
	int a,b,c,d,e,f,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	
	x = ((b*f)-(c*e));
	y = ((c*d)-(a*f));
	z = ((a*e)-(b*d));
	
	printf("(%d)i+(%d)j+(%d)k",x,y,z);
	return 0;
}
