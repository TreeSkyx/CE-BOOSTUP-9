#include<stdio.h>  
int main(){    
	int a,b,i,j,m=0,flag=0;
	int p=0;       
	scanf("%d %d",&a,&b);
	for(j=a;j<=b;j++)
	{   
		m=j/2;    
			for(i=2;i<=m;i++)    
			{    
			if(j%i==0)    
			{     
					flag=1;       
			}		    
	}	    
		if(flag==0) p++;
		}
	printf("%d",p);
	return 0;  
}

