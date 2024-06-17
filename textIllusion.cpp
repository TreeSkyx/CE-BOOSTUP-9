#include <stdio.h>
#include <string.h>
int main(){
	char text[500];
	int i,len;
	scanf("%[^\n]",text);
	len = strlen(text);
	for(i=0;i<len;i++){
		if(text[i]!=text[i+1]){
			printf("%c",text[i]);
			printf("\n");
		}
		else printf("%c",text[i]);
	}
	return 0;
}

