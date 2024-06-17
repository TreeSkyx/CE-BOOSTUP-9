#include <stdio.h>
int main(){
	int x,y,z;
	int  ans,i,count=1;
	scanf("%d %d %d",&x,&y,&z);
	for(i=0;i<x-y;i=i+y)
	{
		i = i-z;
		count++;
	}
	printf("%d",count);
	return 0;
}
