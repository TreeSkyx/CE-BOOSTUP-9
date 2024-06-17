#include <stdio.h>

int main() {
	int n,i,j;
	scanf("%d",&n);
	int year[n];
	int age[n];
	for(i=0;i<n;i++){
		scanf("%d",&year[i]);
	}
	
	for (j=0;j<n;j++) {
		if(year[j]>2564)printf("NULL\n");
		else{
			age[j] = 2564-year[j];
			printf("%d\n",age[j]);
		}
	}
	
	return 0;
}

