#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i;
	scanf("%s",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		switch(t[i]){
			case 'I' : printf("1"); break;
			case 'R' : printf("2"); break;
			case 'E' : printf("3"); break;
			case 'A' : printf("4"); break;
			case 'S' : printf("5"); break;
			case 'B' : printf("6"); break;
			case 'T' : printf("7"); break;
			case 'G' : printf("9"); break;
			case 'O' : printf("0"); break;
			default : printf("%c",t[i]);
			}
	}
	return 0;
}
