#include <stdio.h>
#include <string.h>

int main() {
	int dec,temp,hexDec;
    int octal[100];
    int hex[100];
    int i=0, j, k=0, l, len;
    char text[10000];
    
    scanf("%s", text);
    len = strlen(text);
    while(i<len){
    
	dec = (int)text[i];
	printf("%d",dec);
    temp = dec;
	hexDec = dec; 
	k=0;    
    // hex
    do{
        hex[k] = hexDec % 16;
        hexDec /= 16;
        k++;    
    }while(hexDec > 0);
    //hex print
    for(l = k - 1; l >= 0; l--)
    {
        switch(hex[l])
        {
            case 15 : printf("f"); break;
            case 14 : printf("e"); break;
            case 13 : printf("d"); break;
            case 12 : printf("c"); break;
            case 11 : printf("b"); break;
            case 10 : printf("a"); break;
            default : printf("%d", hex[l]);
        }   
    }
	i++;	
	}
    

	return 0;
}
