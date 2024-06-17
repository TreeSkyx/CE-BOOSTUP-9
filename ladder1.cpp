#include <stdio.h>
int main() {
	int dec,temp;
    int octal[100];
    int i=0, j;
    
    scanf("%d", &dec);
    temp = dec; 
    do{
        octal[i] = dec % 8;
        dec /= 8;
        i++;    
    }while(dec > 0);
     
     
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]); 
    }
    printf("%d",temp);
	return 0;
}
