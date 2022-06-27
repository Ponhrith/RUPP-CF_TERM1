#include <stdio.h>
#define MAX 10000
 
int main()
{
    char octalnum[MAX];
    long i = 0;
 
    printf("Enter any octal number: ");
    scanf("%s", octalnum);
    printf("Equivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[3*i])
        {
        case '000':
            printf("0"); break;
        case '001':
            printf("1"); break;
        case '010':
            printf("2"); break;
        case '011':
            printf("3"); break;
        case '100':
            printf("4"); break;
        case '101':
            printf("5"); break;
        case '110':
            printf("6"); break;
        case '111':
            printf("7"); break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}