#include <stdio.h>
#include <string.h>
int main() {
	char t[10000];
	int i,len,p=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	if(len<=100){
		for(i=0;i<len;i++){
			if(t[i]=='p'&&t[i+1]=='i'&&t[i+2]=='n'&&t[i+3]=='g')
			{
				printf("CUTE-3-");
				p++;
				break;
			}
		}
		if(p==0) printf("NOT CUTE");
	}else printf("ERROR");
	return 0;
}
