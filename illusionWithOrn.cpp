#include <stdio.h>
#include <string.h>
int main(){
	char d[1000];
	char t[1000];
	int i,j=0,lenD,lenT;
	scanf("%[^\n]",d);
	scanf("%s",t);
	lenD = strlen(d);
	for(i=0;i<lenD;i++){
		if(d[i]==' '){
			printf("%c",t[j]);
			j++;
		}
		else{
			printf("%c",d[i]);	
		} 
	}
	return 0;
}
