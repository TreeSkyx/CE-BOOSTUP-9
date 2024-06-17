#include <stdio.h>


int absButme(int x) {
	int abs;
	if(x<0) abs = x*-1;
	else abs=x;
	return abs;
}

int main() {
	int n,ans;
	scanf("%d", &n);
	ans = absButme(n);
	printf("%d", ans);
	return 0;
}

