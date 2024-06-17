#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i,count,p=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	count=len;
	for(i=0;i<len/2;i++){
		//if(t[i]==(t[count-1]+32)||t[i]==(t[count-1]-32)){
			//p++;
			printf("%c\n",t[count-1]+32);
	//	}
		count--;
	}
	if(p==(len/2)) printf("Palindrome");
	else printf("Not Palindrome");
	return 0;
}
