#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	char a[1000],b[1000];
	int i,j,lenA,lenB,dif,temp,count=0;
	scanf("%s",a);
	scanf("%s",b);
	lenA = strlen(a);
	lenB = strlen(b);
	for(i=1;i<lenA;i++)
	{
		j = i;
		while(j>0 && a[j-1] > a[j]){
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}
	for(i=1;i<lenB;i++)
	{
		j = i;
		while(j>0 && b[j-1] > b[j]){
			temp = b[j];
			b[j] = b[j-1];
			b[j-1] = temp;
			j--;
		}
	}
	/*printf("%s\n",a);
	printf("%s",b);*/
	for(i=0;i<lenA;i++){
		count=0;
		for(j=0;j<lenB;j++){
			if(a[i]!=b[j]) {
				count++;
			}
		}
		if(count>1) printf("%c",a[i]);
	}
	return 0;
}
