#include <stdio.h>
#include <math.h>
int main(){
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	sum = a+b;
	if(sum!=0)
	{
		int nDigits = floor(log10(abs(sum))) + 1;
		printf("%d",nDigits);
	}
	
	else printf("%d",1);
	return 0;
}
