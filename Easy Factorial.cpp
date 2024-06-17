#include <stdio.h>
int main() {
	int n,i;
	long ans=1;
	scanf("%d",&n);
	if(n>=0 && n<=20)
	{
		for(i=1;i<=n;i++){
		ans = ans*i;
		}
	printf("%ld",ans);
	}
	else printf("Error");
	return 0;
}
