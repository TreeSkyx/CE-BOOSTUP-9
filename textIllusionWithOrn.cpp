#include <stdio.h>
#include <string.h>
int main() {
	char text[1000];
	char n[5];
	int i,len,num,check=0;
	scanf("%s",text);
	len = strlen(text);
	while(1) {
		scanf("%s",&n[0]);
		num = (int)n[0];
		num = num-48;
		text[num] = '-';
		if(n[0] == 's'){
			break;
		}
	}
	for(i=0;i<len;i++){
		if(text[i]=='-'){
			check++;
		} 
	}
	if(check==len){
		printf("NOOOOOOOOOOOOOOOO!");
	}
	else{
		for(i=0;i<len;i++){
		if(text[i]=='-'){
			continue;
		}
		else printf("%c",text[i]);
	}
	return 0;
}
}
