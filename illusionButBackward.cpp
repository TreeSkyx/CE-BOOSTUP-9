#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i,d;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
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
