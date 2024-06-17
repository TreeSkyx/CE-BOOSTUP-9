#include<stdio.h>
int main(){

    int num,i,count,n,m,p=0;
    scanf("%d %d",&m,&n);
	if(m>=2 && n>=2 && m<=10000 && n<=10000)
	{
		for(num = m;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             p++;
    }
	}
  	printf("%d",p);
   return 0;
}
