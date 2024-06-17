#include <stdio.h>
#include <stdlib.h>
int main() {
	char x[100];
	int y,i;
	double num;
	scanf("%s", x);
	scanf("%d",&y);
	num = atof(x);
	/*for(i=0;i<=y+1;i++)
	{
		printf("%c",x[i]);
	}*/
	printf("%lf",&num);
	return 0;
}
