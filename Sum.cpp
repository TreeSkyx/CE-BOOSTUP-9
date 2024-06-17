#include <stdio.h>

int main() {
	int n,m,sum=0;
	scanf("%d %d",&n,&m);
	
	if(m<n)
	{
		for(int i=m;i<=n;i++){
		sum = sum +i;
	}
	}
	else {
		for(int i=n;i<=m;i++){
		sum = sum +i;
			}
	}
	printf("%d",sum);
	return 0;
}
