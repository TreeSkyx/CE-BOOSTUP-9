#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i;
	scanf("%s",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		switch(t[i]){
			case '1' : printf("I"); break;
			case '2' : printf("R"); break;
			case '3' : printf("E"); break;
			case '4' : printf("A"); break;
			case '5' : printf("S"); break;
			case '6' : printf("B"); break;
			case '7' : printf("T"); break;
			case '9' : printf("G"); break;
			case '0' : printf("O"); break;
			default : printf("%c",t[i]);
			}
	}
	return 0;
}
