#include <stdio.h>
#include <string.h>
int main() {
	char t[10000];
	int i,len;
	scanf("%s",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]==t[i+1] || t[i]==t[i-1]){
			printf("%c",t[i]);
			i++;
		}
		else printf("%c",t[i]);
	}
	return 0;
}
