#include <stdio.h>
#include <string.h>
int main() {
	int ans;
	int x,y,a,b;
	scanf("%d",&ans);
	scanf("%d %d",&x,&y);
	scanf("%d %d",&a,&b);
	if((x+y)==ans) printf("+\n");
	else if((x-y)==ans) printf("-\n");
	else if((x*y)==ans) printf("*\n");
	else printf("/\n");
	if((a+b)==ans) printf("+");
	else if((a-b)==ans) printf("-");
	else if((a*b)==ans) printf("*");
	else printf("/");
	return 0;
}
