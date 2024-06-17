#include <stdio.h>
#include <string.h>
int main() {
	char n[1000];
	char k[1000];
	int len,i,count;
	scanf("%s",n);
	len = strlen(n);
	count = len-1;
	for(i=0;i<len;i++){
		k[count]=n[i];
		count--;	
	}
	for(i=len-1;i>=0;i--){
		if(i%3==0&&i>2){
			printf("%c,",k[i]);
		}
		else printf("%c",k[i]);
	};
	return 0;
}
/*

*/
