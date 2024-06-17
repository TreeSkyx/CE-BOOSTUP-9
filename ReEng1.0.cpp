#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int i,as,len;
	scanf("%s",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		as =(int)t[i];
		printf("%d",as);
	}
	return 0;
}
