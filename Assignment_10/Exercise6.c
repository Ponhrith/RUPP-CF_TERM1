#include<stdio.h>
#include<conio.h>
int main()
{
    int bin, oct=0, i=0, mul=1, count=1, rem, octnum[20];
    printf("Enter any Binary Number: ");
    scanf("%d", &bin);
    while(bin!=0)
    {
        rem = bin%10;
        oct = oct + (rem*mul);
        if(count%3==0)
        {
            octnum[i] = oct;
            mul = 1;
            oct = 0;
            count = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            count++;
        }
        bin = bin/10;
    }
    if(count!=1)
        octnum[i] = oct;
    printf("\nEquivalent Octal Value = ");
    for(i=i; i>=0; i--)
        printf("%d", octnum[i]);
    getch();
    return 0;
}