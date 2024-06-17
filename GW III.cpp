#include <stdio.h>
int main(){
	int m,n,i,j,len,p1,p2;
	scanf("%d",&n);
	int c[n+1];
	char op;
	for(i=1;i<=n;i++){
		scanf("%d",&c[i]);
	}
	scanf("%d",&m);
	int ans[m];
	for(i=0;i<m;i++){
		scanf("%d %c %d",&p1,&op,&p2);
		switch(op){
			case '+' : ans[i]=c[p1]+c[p2]; break;
			case '-' : ans[i]=c[p1]-c[p2]; break;
			case '*' : ans[i]=c[p1]*c[p2]; break;
			case '/' : ans[i]=c[p1]/c[p2]; break;
		}		
	}
	for(i=0;i<m;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}
