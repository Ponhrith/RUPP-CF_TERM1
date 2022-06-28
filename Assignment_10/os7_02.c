#include<stdio.h>
int main()
{
    int dec;
    int hex[100];
    int i=0, j;
    printf(" Input Decimal value : ");
    scanf("%d", &dec);
    do{
        hex[i] = dec%16;
        dec /= 16;
        i++;    
    }while(dec > 0);
    printf("\n Hexadecimal value is ");
    for(j = i - 1; j >= 0; j--)
    {
        switch(hex[j])
        {
            case 15 : printf("F"); break;
            case 14 : printf("E"); break;
            case 13 : printf("D"); break;
            case 12 : printf("C"); break;
            case 11 : printf("B"); break;
            case 10 : printf("A"); break;
            default : printf("%d",hex[j]);
    	}
	}
	return 0;
}
