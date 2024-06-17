#include <stdio.h>  
  
int main(void) {  
  int n,m;   
  scanf("%d",&n);
  if(n>0)
  {
  n = n+1;  
  m=2*n-1;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("*");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
 	 }
	}
else printf("Error");
  return 0;  
}  
