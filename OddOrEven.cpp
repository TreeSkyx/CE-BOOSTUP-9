#include <stdio.h>
int main() {
	int n[10000],x=0;
	int i,odd=0,even=0;
	while(1){
		scanf("%d",&n[x]);
		if(n[x] != 0)
		{
			if(n[x]%2 == 0) even = even + n[x];
			else odd = odd + n[x];
			x++;
		}
		else break;
	}
	printf("%d\n%d",odd,even);
	return 0;
}
