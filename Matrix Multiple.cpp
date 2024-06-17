#include<stdio.h>    
#include<stdlib.h>  
int main(){  
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,m,n;       
	scanf("%d %d",&r,&c);
	scanf("%d %d",&m,&n);  
	if(c==m)
	{          
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    	
		{    
			scanf("%d",&a[i][j]);    
		}	    
	}	      
	for(i=0;i<m;i++)    
	{    
		for(j=0;j<n;j++)    
		{    
			scanf("%d",&b[i][j]);    
		}		    
	}    
    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
			mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    
//for printing result    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
		printf("%d ",mul[i][j]);    
		}    
	printf("\n");    
	}
	}
	else printf("error");
	return 0;  
}  
