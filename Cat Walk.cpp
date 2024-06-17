#include <stdio.h>
int main() {
	int n,i,fac=1;
	scanf("%d",&n);
	if(n>=2 && n<=300) {
		for(i=1;i<n;i++) {
			fac = fac*i;
		}
		printf("%d",fac);
	}
	else printf("ERROR");
	return 0;
}
