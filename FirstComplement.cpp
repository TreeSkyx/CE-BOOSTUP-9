#include <stdio.h>
#include <string.h>

int main() {
	char n[1000];
	int len,i;
	scanf("%s",n);
	len = strlen(n);
	for (i=0;i<len;i++) {
		if(n[i] == '1'){
			n[i] = '0';
		}
		else n[i] = '1';
	}
	printf("%s",n);
	return 0;
}
