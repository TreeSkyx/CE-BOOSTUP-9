#include <stdio.h>
int main(){
	int n,cola=0,bottle,lid;
	scanf("%d",&n);
	cola = n/20;
	if(cola>2){
		bottle = cola;
		lid = cola;
		cola = cola+(bottle/2);	
		cola = cola+(lid/4);
	}
	printf("%d",cola);
	return 0;
}
