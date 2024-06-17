#include <stdio.h>
#include <string.h>
int main() {
	char text[100];
	int len,i;
	scanf("%[^\n]",text);
	len = strlen(text);
	for(i=0;i<=len-1;i++){
		if((text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122) || (text[i]>=48 && text[i]<=57)){
			printf("%c",text[i]);
		}
	}
	return 0;
}
