#include <stdio.h>
int main() {
	int x=0,count=1,i,j,n[1000],t[1000],d[1000],temp;
	int asp=0,dep=0;
	while(1){
		scanf("%d",&n[x]);
		if(n[x]!=0){
			t[x] = n[x];
			d[x] = n[x];
			count++;
			x++;
		}else break;
	}
	
	for(i=1;i<=count-2;i++)
	{
		j = i;
		while(j>0 && n[j-1] > n[j]){
			temp = n[j];
			n[j] = n[j-1];
			n[j-1] = temp;
			j--;
		}
	}
	
	for(i=1;i<=count-2;i++)
	{
		j = i;
		while(j>0 && d[j-1] < d[j]){
			temp = d[j];
			d[j] = d[j-1];
			d[j-1] = temp;
			j--;
		}
	}
	for(i=0;i<=count-2;i++)
	{
		if(t[i] == n[i]) asp = asp + 1;
		if(t[i] == d[i]) dep = dep + 1;	
	}
	
	if(asp == count-1) printf("Ascending Sort Order");
	if(dep == count-1) printf("Descending Sort Order");
	if(dep != count-1 && asp != count -1)printf("Unsorted Order");
	
	return 0;
}
