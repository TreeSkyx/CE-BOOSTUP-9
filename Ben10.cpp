#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=n*2;j++){
			if(j==n*2) printf("/");
			else printf("-");	
		}
		printf("\n");
	}
	return 0;
}
