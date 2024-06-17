#include <stdio.h>
int f(int x){
	int ans=0;
	ans = x*(x+1)*(x+2);
	return ans;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
