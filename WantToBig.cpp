#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char text[1000];
	int i,len;
	scanf("%[^\n]", text);
	len = strlen(text);
	for(i=0;i<=len-1;i++){
		text[i] = toupper(text[i]);
		printf("%c",text[i]);
	}
	return 0;
}
