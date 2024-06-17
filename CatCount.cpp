#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i,p=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if((t[i]=='C'||t[i]=='c')&&(t[i+1]=='A'|| t[i+1]=='a')
		  &&(t[i+2]=='T'|| t[i+2]=='t')){
			p++;
		  }
	}
	printf("%d",p);
	return 0;
}
