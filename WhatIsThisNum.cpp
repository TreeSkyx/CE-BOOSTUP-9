#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 
int main(){    
int i,flag=0;
int n,m=0;
char t[10000];     
	scanf("%s",t);
	int len = strlen(t);
	for(i=0;i<len;i++){
		if(t[i]=='.'){
			printf("IS NOT PRIME");
			return 0;
		}
	}
	n = atoi(t);
	m=(float)n/2;    
	for(i=2;i<=m;i++)    
	{    
		if(n%i==0)    
		{    
		printf("IS NOT PRIME");    
		flag=1;    
		break;    
	}    
	}    
	if(flag==0)    
	printf("IS PRIME"); 
	return 0;  
 }    
