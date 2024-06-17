#include <stdio.h>
int main() {
	int n,i;
	int c[9];
	for(i=0;i<=9;i++){
		c[i] = 0;
	}
	while(1){
		scanf("%d",&n);
		if(n>=0 && n<=9){
			switch(n){
			
				case 0 : c[0]++; break;
				case 1 : c[1]++; break;
				case 2 : c[2]++; break;
				case 3 : c[3]++; break;
				case 4 : c[4]++; break;
				case 5 : c[5]++; break;
				case 6 : c[6]++; break;
				case 7 : c[7]++; break;
				case 8 : c[8]++; break;
				case 9 : c[9]++; break;
			}
		}
		else break;
	} 
	for(i=0;i<=9;i++){
		printf("%d = %d\n",i,c[i]);
	}
	return 0;
}
