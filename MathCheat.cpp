#include <stdio.h>
#include <string.h>

int main() {
	int i,n,ans=0;
	int x[100];
	scanf("%d",&n);

	for(i=1;i<=12;i++){
		ans = n*i;
		printf("%d x %d = %d\n",n,i,ans);
	}
	return 0;
}
