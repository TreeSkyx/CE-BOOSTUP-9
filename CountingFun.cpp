#include <stdio.h>
int main() {
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x<y)
		{
		if(z>0 && x<=y){
		for(x;x<=y;x+=z)
		{
			printf("%d\n",x);
		}
		if(x<(y+z)) printf("%d",y);
		}else
		{
		printf("Go to hell");
		}
	}
	else if(x==y) printf("%d",x);
	else{
		if(z<0 && x>=y){
		for(x;x>=y;x+=z)
		{
			printf("%d\n",x);
		}
		if(x>(y+z)) printf("%d",y);
		}else
		{
		printf("Go to hell");
		}
	}
	return 0;
}

