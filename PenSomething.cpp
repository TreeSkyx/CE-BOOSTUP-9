#include <stdio.h>
#include <string.h>
int main(){
	char t[10000];
	int len,i;
	int alp=0,vow=0,num=0,word=1;
	scanf("%[^\n]",t);
	len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]>=65 && t[i]<=90 || t[i]>=97 && t[i]<=122){
			if(t[i]=='A' || t[i]=='a' || 
			   t[i]=='E' || t[i]=='e' ||
			   t[i]=='I' || t[i]=='i' || 
			   t[i]=='O' || t[i]=='o' || 
			   t[i]=='U' || t[i]=='u') vow++;
			else alp++;
		}
		else if(t[i]>=48 && t[i]<=57){
			num++;
		}
		else if(t[i]==' ') word++;
	}
	printf("Alphabet = %d\n",alp);
	printf("Vowel = %d\n",vow);
	printf("Number = %d\n",num);
	printf("Word = %d",word);
	return 0;
}
