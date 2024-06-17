#include <stdio.h>
#include <string.h>
int main() {
	char text[1000];
	int i,len;
	scanf("%s",text);
	len = strlen(text);
	for(i=0;i<len;i++){
		if(text[i]>=48 && text[i]<=57){
			printf("%c",text[i]);
		}
	}printf("\n");
	for(i=0;i<len;i++){
		if(text[i]>=65 && text[i]<=90){
			printf("%c",text[i]);
		}
	}printf("\n");
	for(i=0;i<len;i++){
		if(text[i]>=97 && text[i]<=122){
			printf("%c",text[i]);
		}
	}
	return 0;
}
