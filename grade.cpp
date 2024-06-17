#include <stdio.h>

int main() {
	int n=0;
	scanf("%d",&n);
	if(n>=80 && n<=100) printf("A");
	else if(n>=75 && n< 80) printf("B+");
	else if(n>=70 && n< 75) printf("B");
	else if(n>=65 && n< 70) printf("C+");
	else if(n>=60 && n< 65) printf("C");
	else if(n>=55 && n< 60) printf("D+");
	else if(n>=50 && n< 55) printf("D");
	else if(n>=0 && n< 50) printf("F");
	else printf("ERROR");
	return 0;
}
