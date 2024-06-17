#include <stdio.h>
int main() {
	int i,j,l,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
		if(i>0) printf(" ");
		}
		printf("\\");
		if(i==n-1) printf("n");
		else printf("\n");
	}
	return 0;
}
