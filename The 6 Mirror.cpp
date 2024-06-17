#include <stdio.h>

int main() {
	char n[6],r[6];
	int i,count=5,num,sum=0;
	scanf("%s",n);
	for(i=0;i<6;i++){
		r[count] = n[i];
		count--;
	}
	printf("%s",r);
	for(i=0;i<6;i++){
		sum = sum + (int)(r[i]-48);
	}
	num = (int)r[5];
	if(num%2 == 0) printf(":Even:");
	else printf(":Odd:");
	
	printf("%d",sum);
	
	return 0;
}
