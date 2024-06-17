#include <stdio.h>
#include <string.h>
int main() {
	char t[10000];
	int len,i,temp=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]>=65 && t[i]<=90 || t[i]>=97 && t[i]<=122){
			if(t[i]>temp)
			temp = t[i];
		}
	}
	printf("%c",temp);
	return 0;
}
