#include <stdio.h>
int main() {
	int n,i,j,space,k;
	scanf("%d",&n);
	for(i=0;i<n+2;i++){
		for(j=0;j<n+2;j++){
			if(j==n+1) printf("x");
			else printf(" ");
		}
		printf("\n");
	}
	for(i=0;i<=n+2;i++){
			if(i>=n) printf("x");
			else printf(" ");
	}
	n = n+1;
	for (i = 1; i <= n; ++i, k = 0) {
      for (space = 1; space <= n - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
	return 0;
}
