#include <stdio.h>
int main() {
	int n,i,odd=0;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]%2 != 0) odd = odd+1;
	}
	printf("%d",odd);
}
