#include <stdio.h>

int main() {
	int x,i,j,temp,count=0;
	int n[10];
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
		if(n[i]<0 || n[i]>100) count++;

	}
	
	for(i=1;i<=9;i++)
	{
		j = i;
		while(j>0 && n[j-1] > n[j]){
			temp = n[j];
			n[j] = n[j-1];
			n[j-1] = temp;
			j--;
		}
	}
	if(count == 0) printf("%d %d",n[0],n[9]);
	else printf("There is something WRONG.");
	return 0;
}
