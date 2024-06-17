#include <stdio.h>
#include <string.h>
int main() {
	char n[10000];
	int i,len,ans=1;
	scanf("%s",n);
	len = strlen(n);
	for(i=0;i<len;i++){
		ans = ans*(int)(n[i]-48);
	}
	printf("%d",ans);
	return 0;
}
