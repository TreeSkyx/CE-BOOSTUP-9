#include <stdio.h>
#include <string.h>

int main() {
	char text[10000];
	int len,i;
	scanf("%[^\n]",text);
	len = strlen(text); 
	for(i=len-1;i>=0;i--){
		printf("%c",text[i]);
	}
	return 0;
}
