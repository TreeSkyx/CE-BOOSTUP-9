#include <stdio.h>
int main() {
	int n,count=0;
	scanf("%d",&n);
	if(n>0)
	{
	for(int i=0;i<n;i++){
		if(count>=26) count = 0;
		printf("%c",97+count);
		count++;
	}
	}
	else printf("ERROR");
	return 0;
}
