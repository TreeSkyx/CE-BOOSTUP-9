#include <stdio.h>
#include <string.h>
int main() {
	char t[100];
	int len,i,d;
	scanf("%s",t);
	len = strlen(t);
	for(i=len-1;i>=0;i--){
		if(t[i]>=65 && t[i]<=90){
			d = (int)t[i]-'A';
			printf("%c",'A'+(25-d));
		}
		else if(t[i]>=97 && t[i]<=122){
			d = (int)t[i]-'a';
			printf("%c",'a'+(25-d));
		}
		else printf("%c",t[i]);
	}
	return 0;
}
