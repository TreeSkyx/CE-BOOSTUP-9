#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	char b[100];
	int lenA,lenB,ans = 0,temp,sum=0;
	
	scanf("%s %s",a,b);
	lenA = strlen(a);
	lenB = strlen(b);
	if(lenA>lenB){
		for(int i=lenB-1;i>=0;i--){
			ans = ans + (int)(a[lenA-1]-48)*(b[i]-48);
			lenA--;	
		}
		printf("%d",ans);
	}
	else if(lenB>lenA){
		for(int i=lenA-1;i>=0;i--){
			ans = ans + (int)(a[i]-48)*(b[lenB-1]-48);
			lenB--;	
		}
		printf("%d",ans);
	}else
	{
		for(int i=lenB-1;i>=0;i--){
			ans = ans + (int)(a[i]-48)*(b[i]-48);
		}
		printf("%d",ans);
	}
	return 0;
}
