#include <stdio.h>

int main() {
	int n,checker;
	scanf("%d",&n);
	checker = n%2;
	//if(n != 0){
		if(checker == 0) printf("even");
		else printf("odd");
	//}
	/*else printf("Error");*/
	return 0;
}
