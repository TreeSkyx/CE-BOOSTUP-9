#include <stdio.h>
#include <math.h>
int main() {
	long i=0,a=0,b=0,sum=0;
	scanf("%ld %ld",&a,&b);

	for(i=a;i<=b;i++){
		sum = sum + ((i+3)*(i+3));
	}
	printf("%ld",sum);
	return 0;
}
