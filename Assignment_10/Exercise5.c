#include <stdio.h>
 
int main()
{
    char octal[100];
    long index = 0; 
 
    printf("Enter any octal number: ");
    scanf("%s", octal);
    printf("The binary value is: ");
    while (octal[index])
    {
        switch (octal[index])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n Invalid octal digit %c ", octal[index]);
            return 0;
        }
        index++;
    }
    return 0;
}