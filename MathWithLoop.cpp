#include <stdio.h>
int main() {
	int n[100],x=1,sum=0,count=1;
	int i,j,temp;
	float a=0;
	scanf("%d",&n[0]);
	while(1){
		scanf("%d",&n[x]);
		count++;
		sum = sum+n[x];
		if(n[x]<n[x-1]) break;
		x++;
	}
	sum = sum+n[0];
	printf("%d ",sum);
	a = (float)sum/count;
	for(i=1;i<=count-1;i++)
	{
		j = i;
		while(j>0 && n[j-1] > n[j]){
			temp = n[j];
			n[j] = n[j-1];
			n[j-1] = temp;
			j--;
		}
	}
	printf("%d %d ",n[0],n[count-1]);
	printf("%.2f",a);
	return 0;
}
