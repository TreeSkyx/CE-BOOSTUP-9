#include <stdio.h>
int main() {
	int x,i,j,temp;
	scanf("%d",&x);
	int n[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=1;i<=x-1;i++)
	{
		j = i;
		while(j>0 && n[j-1] > n[j]){
			temp = n[j];
			n[j] = n[j-1];
			n[j-1] = temp;
			j--;
		}
	}
	printf("%d\n%d",n[x-1],n[x-2]);
	return 0;
}
