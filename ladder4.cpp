#include <stdio.h>
int main() {
	int dec,temp,hexDec,decPlus;
    int octal[100];
    int hex[100];
    int i=0, j, k=0, l;
    
    scanf("%d,", &dec);
    temp = dec;
	hexDec = dec; 
	decPlus = dec+8;
	
	// Oct
    do{
        octal[i] = dec % 8;
        dec /= 8;
        i++;    
    }while(dec > 0);
     
    // Oct print
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]); 
    }
    // Dec print
    printf("%d",temp);
    
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
    
    i=0; j=0; k =0; l=0;
    hexDec = decPlus;
    temp = decPlus;
    // Oct
    do{
        octal[i] = decPlus % 8;
        decPlus /= 8;
        i++;    
    }while(decPlus > 0);
     
    // Oct print
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]); 
    }
    // Dec print
    printf("%d",temp);
    
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
	return 0;
}
