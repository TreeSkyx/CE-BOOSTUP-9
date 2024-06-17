#include <stdio.h>
#include <string.h>
int main(){
	char b[8];
	int len,i,j,last=0;
	scanf("%s",b);
	len = strlen(b);
	for(i=0;i<len;i++){
		if(b[i]=='1') last = i;
	}
	for(j=0;j<last;j++){
		if(b[j]==48){
			b[j]='1';
		}
		else if(b[j]==49){
			b[j]='0';
		}
	}
	for(j=0;j<len;j++){
		printf("%c",b[j]);
	}
	return 0;
}
