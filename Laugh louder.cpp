#include <stdio.h>
#include <string.h>
int main() {
	char noon[100],jane[100],bow[100];
	int n,j,b,i,check=0;
	scanf("%s",noon);
	scanf("%s",jane);
	scanf("%s",bow);
	
	n = strlen(noon);
	j = strlen(jane);
	b = strlen(bow);
	
	for(i=0;i<n;i++){
		if(noon[i]!='5') check++;
	}
	for(i=0;i<j;i++){
		if(jane[i]!='5') check++;
	}
	for(i=0;i<b;i++){
		if(bow[i]!='5') check++;
	}
	if(n<10&&j<10&&b<10&&check==0){
		if(n>j && n>b)printf("Noon is crazy");
		else if(j>n && j>b) printf("Jane is crazy");
		else if(b>n && b>j) printf("Bow is crazy");
		else if(n==j && n>b) printf("Noon and Jane are crazy");
		else if(n>j && n==b) printf("Noon and Bow are crazy");
		else if(j>n && j==b) printf("Jane and Bow are crazy");
		else if(n==j && j==b) printf("They are crazy");
		else printf("ERROR");
	}
	else printf("ERROR");
	return 0;
}
