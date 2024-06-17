#include <stdio.h>

int main() {
	int num,i,j;
	scanf("%d",&num);
	for(i=10;i>=1;i--){
		printf("%d\n",num-i);
	}
	printf("%d\n",num);
	for(j=1;j<=10;j++){
		printf("%d\n",num+j);
	}
}
