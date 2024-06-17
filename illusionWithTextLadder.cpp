#include <stdio.h>
int main() {
	int n,i,j;
	char t[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",t);
	}
	
		for(i=0;i<n;i++){
	
		for(j=0;j<i;j++){
			if(i>0) printf(" ");
		}
		printf("%s",t);
	}
	return 0;
}
