#include <stdio.h>

int main() {
	long n=0,sum=0;
	scanf("%ld",&n);
	if(n>0)
	{
	for(int i=1;i<=n;i++){
		sum = sum+i;
	}
		printf("%ld",sum);
	}
	else{
		printf("Error");
	}

	return 0;
}
