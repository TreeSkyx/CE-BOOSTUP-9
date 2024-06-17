#include <stdio.h>

int main() {
	int i,n,min,max,sum;
	scanf("%d",&n);
	
	if(n >= 0 && n<100)
	{
		min = n-2;
		max = n+2;
		for(i=min;i<=max;i++){
			sum = i+i;
			printf("%d + %d = %d\n",i,i,sum);
		}
	}
	else printf("ERROR");
	return 0;
}
