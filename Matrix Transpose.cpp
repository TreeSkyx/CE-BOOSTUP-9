#include <stdio.h>
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	int mat[m][n];
	
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=n-1;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=m-1;j++){
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
	return 0;
}

