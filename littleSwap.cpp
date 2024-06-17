#include <stdio.h>
#include <string.h>
int main(){
	char t[100];
	int i,len,b;
	scanf("%s",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if((int)t[i]+17>90){
			b = ((int)t[i]+17)-90;
			//printf("%d",b);
			printf("%c",'@'+b);
		}else printf("%c",t[i]+17);
	}
	return 0;
}
