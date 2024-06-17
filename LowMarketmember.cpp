#include <stdio.h>

int main() {
	char id[15],name[15],cat[15],temp;
	scanf("%s",&id);
	scanf("%c",&temp);
	scanf("%[^\n]",name);
	scanf("%s",cat);
	
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	printf("+                                      +\n");
	printf("+             id: %s                   +\n",id);
	printf("+           NAME: %s                   +\n",name);
	printf("+       category: %s                   +\n",cat);
	printf("+                                      +\n");
	printf("++++++++++++++++++++++++++++++++++++++++");
	return 0;
}
