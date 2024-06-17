#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i,cap=0,sma=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]>=65 && t[i]<=90 || t[i]==32) cap++;
		else if(t[i]>=97 && t[i]<=122 || t[i]==32) sma++;
	}
	if(cap==len) printf("All Capital Letter");
	else if(sma==len) printf("All Small Letter");
	else printf("Mix");
	return 0;
}
