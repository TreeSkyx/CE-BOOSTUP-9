#include <stdio.h>
int main() {
	long n,b1000,b500,b100,b50,ans;
	scanf("%ld",&n);
	
	if(n>=50){
		b1000 = n/1000;
		b500 = (n%1000)/500;
		b100 = (n%500)/100;
		b50  = (n%100)/50;
		ans =(b1000*1000)+(b500*500)+(b100*100)+(b50*50);
	if(n-ans==0) printf("%ld, %ld, %ld, %ld",b1000,b500,b100,b50);
	else printf("error");
	}else printf("error");
	return 0;
}
