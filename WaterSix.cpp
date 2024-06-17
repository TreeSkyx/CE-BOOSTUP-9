#include <stdio.h>
#include <string.h>
int main() {
	char text[10000];
	int len,i,count=0;
	scanf("%[^\n]",text);
	len = strlen(text);
	for(i=0;i<len;i++){
		if(i%10!=0 || i==0){
			printf("%c",text[i]);
		}else{
			printf("\n");
			printf("%c",text[i]);
		}
	}
	return 0;
}
