#include <stdio.h>

int main() {
	int n,l,area;
	scanf("%d %d",&n,&l);
	if(n>0 && l>0)
	{
		area = (l*l)*n;
		printf("%d",area);
	}
	else
	printf("Error");
}
