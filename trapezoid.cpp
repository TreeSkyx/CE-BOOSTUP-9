#include <stdio.h>
int main() {
	float h,l1,l2,ans;
	scanf("%f %f %f",&h,&l1,&l2);
	if(h>0 && l1>0 && l2>0 && l1!=l2)
	{
	ans = 0.5*(l1+l2)*h;
	printf("%.6f",ans);
	}
	else printf("Error");
	return 0;
}
