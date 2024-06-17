#include <stdio.h>
#include <string.h>
int main() {
	char text[200];
	int len,i,cap=0,low=0;
	scanf("%[^\n]", text);
	len = strlen(text);
	for(i=0;i<=len-1;i++){
		if(text[i]>=65 && text[i]<=90){
				cap = cap+1;
		}
		else if(text[i]>=97 && text[i]<=122)
		{
			low = low+1;
		}
	}
	printf("Capital letter = %d\n",cap);
	printf("Lower-case letter = %d",low);
	return 0;
}
