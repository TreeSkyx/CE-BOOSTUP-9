#include <stdio.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	if(n>1){
		for(i=0;i<n;i++){
			if(i==0) printf("/");
			else if(i==n-1) printf("\\");
			else printf("-");
		}
		printf("\n");
		for(i=0;i<n-2;i++){
			for(j=0;j<n;j++){
				if(j==0) printf("|");
				else if(j==n-1) printf("|");
				else printf(" ");
			}
			printf("\n");
		}	
		for(i=0;i<n;i++){
			if(i==0) printf("\\");
			else if(i==n-1) printf("/");
			else printf("-");
		}
		for(i=0;i<n;i++){
			printf("n");
		}	
	}
	else printf("ERROR");
	return 0;
}
