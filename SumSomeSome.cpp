#include <stdio.h>
#include <math.h>
int main() {
	int i,a,b,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		sum = sum + pow(i,2);
	}
	printf("%d",sum);
	return 0;
}
