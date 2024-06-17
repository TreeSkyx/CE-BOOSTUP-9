#include <stdio.h>
#include <string.h>
int main() {
	char t[10000];
	int i,len,n=0,s=0,f=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]>=48 && t[i]<=57) n++;
		else if(t[i]=='.' && n>1){
			printf("FLOAT !!!!");
			f++;
			break;
		}
	}
	if(n==len) printf("INTEGER !!!");
	else if(f==0) printf("STRING !!!!!");
	return 0;
}
