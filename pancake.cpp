#include <stdio.h>
int main() {
	int n,i,pancake=0;
	scanf("%d",&n);
	char p[n];
	for(i=0;i<n;i++){
		scanf("%s",&p[i]);
		if(p[i]=='r') pancake++;
		if(p[i]=='e') pancake--;
	}
	if(pancake<0) pancake=0;
	printf("%d",pancake);
	return 0;
}
