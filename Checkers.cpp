#include <stdio.h>
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	if(m>0&&n>0)
	{
	for(int i=0;i<=m-1;i++){
		if(i==0||i%2==0)
		{
			for(int j=0;j<=n-1;j++){
			if(j==0||j%2==0)printf("x");
			else printf("o");
		}
		}
		else{
			for(int k=0;k<=n-1;k++){
			if(k==0||k%2==0)printf("o");
			else printf("x");
		}
		}
		printf("\n");
		}
	}
	else printf("ERROR");
	return 0;
}
