#include <stdio.h>
#include <string.h>
int main() {
	char t[1000];
	int len,i,p=0,count=0,post=0;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if((t[i]=='Y'||t[i]=='y')&&(t[i+1]=='A'|| t[i+1]=='a')
		  &&(t[i+2]=='Y'|| t[i+2]=='y')&&(t[i+3]=='Y'|| t[i+3]=='y')){
		  	if(p==0){
		  		post=i;
		  		p++;
			}
		  	else p++;
		  }
	}
	printf("%d %d",post,p);
	return 0;
}
