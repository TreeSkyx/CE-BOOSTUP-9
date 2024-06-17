#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char n[1000];
	int len,check=0;
	scanf("%s", n);
	len = strlen(n);
	for(int i=0;i<=len;i++){
		if(isalpha(n[i])) check = 1;
		if(n[i] == '.'){
			check = 1;
		}
	}
	if(check == 1){
		printf("FALSE");
	}
	else printf("TRUE");
	return 0;
}
