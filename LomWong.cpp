#include <stdio.h>
int main(){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	printf(" ");
	for(i=0;i<n;i++){
		printf("_");
	}
	printf("\n");
	for(j=0;j<m-1;j++){
	for(i=0;i<=n;i++){
		if(i==0)printf("|");
		else if(i==n)printf(" |\n");
		else printf(" ");
	}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(j==0)printf("|");
			else if(j==n)printf("_|");
			else printf("_");
		}
	}
	return 0;
}
