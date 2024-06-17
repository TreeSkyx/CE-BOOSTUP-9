#include <stdio.h>


void HelloME(char name[]) {
	printf("Hello %s",name);
}

int main() {
	char n[100];
	scanf("%[^\n]", n);
	HelloME(n);
	return 0;
}

