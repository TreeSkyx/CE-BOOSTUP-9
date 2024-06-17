#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	scanf("%[^\n]",t);
	int i,len;
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]!=' '){
			printf("%c",t[i]);
		}
	}
	return 0;
}
