#include <stdio.h>

int main() {
	int kumg,dung;
	char ram[2];

	scanf("%d %d %c",&dung,&kumg,&ram);
	if(kumg == 15){
		printf("Wan Pra Yai");
	}
	else printf("Normal Day");
	return 0;
}
