#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	
	if (n%3 == 0 && n%5 != 0 && n%7 != 0 ) printf("%d",1);
	else if (n%3 != 0 && n%5 == 0 && n%7 != 0 ) printf("%d",2);
	else if (n%3 == 0 && n%5 == 0 && n%7 != 0 ) printf("%d",3);
	else if (n%3 != 0 && n%5 != 0 && n%7 == 0 ) printf("%d",4);
	else if (n%3 == 0 && n%5 != 0 && n%7 == 0 ) printf("%d",5);
	else if (n%3 != 0 && n%5 == 0 && n%7 == 0 ) printf("%d",6);
	else if (n%3 == 0 && n%5 == 0 && n%7 == 0 ) printf("%d",7);
	else printf("%d",0);
	return 0;
}
