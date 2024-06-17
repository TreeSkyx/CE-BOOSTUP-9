#include <stdio.h>
#include <string.h>
int main() {
	int g=0,week=0,day=0,i,len,check=0;
	float dif=0,ans=0;
	//char kg[10000];
	int kg;
	scanf("%d",&kg);
	//len = strlen(kg);
	/*for(i=0;i<len;i++)
	{
		if(kg[i]=='.') check++;
	}*/
	if(/*check!=1 && */kg>1)
	{
	//g = (int)kg[0]*1000;
	g = kg*1000;
	dif = g*0.1;
	
	ans = (float)dif/200;
	week = (int)ans/7;
	day = (int)ans%7;
	
	printf("Takes about %d weeks %d days",week,day);
	}
	else{
		printf("ERROR");
	}
	return 0;
}
