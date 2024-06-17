#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c,cPow,x,i,j,temp;
	int n[3];
	scanf("%d %d %d",&n[0],&n[1],&n[2]);
	for(i=1;i<=2;i++)
	{
		j = i;
		while(j>0 && n[j-1] > n[j]){
			temp = n[j];
			n[j] = n[j-1];
			n[j-1] = temp;
			j--;
		}
	}
	x = pow(n[0],2)+pow(n[1],2);
	cPow = pow(n[2],2);
	if(n[0]>0 && n[1]>0 && n[2]>0)
	{
		
		if(cPow == x) printf("\"Wow! Pythagorean theorem\"");
		else printf("\"Oh nooo!\"");
	}
	else printf("\"Oh nooo!\"");
	return 0;
}

