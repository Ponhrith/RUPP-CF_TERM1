//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int option;
    printf("Please choose a number : ");
    scanf("%d", &option);

    if (option == 1)
    {

        char binary[30];

        printf("Enter a binary: ");
        scanf("%s", binary);
        //
        float decimal = 0;
        int n = strlen(binary) - 1; // Exponent (Use with when user doesn't enter Floating Number)
        float beforeDecimal = 0;
        float afterDecimal = 0;
        int rightPower = 1;
        int i, j, k;

        int leftPower;
        // Finding position of point

        for (i = 0; i < strlen(binary); i++)
        {
            if (binary[i] == '.')
            {
                int afterPointPosition = i + 1;
                leftPower = i - 1;
                //
                // Before Faloating Point
                for (int j = 0; j < i; j++)
                {
                    beforeDecimal += (binary[j] - '0') * pow(2, leftPower);
                    leftPower--;
                }
                printf(" \n \n Before Decimal : %f \n \n", beforeDecimal);

                // After Floating Point
                for (k = afterPointPosition; k < strlen(binary); k++)
                {
                    afterDecimal += (binary[k] - '0') * pow(2, -rightPower);
                    rightPower++;
                }
                // Starting with the minus Exponential
                printf(" After Point Position's :%d \n \n", afterPointPosition);
                //
                printf(" After Decimal : %f", afterDecimal);
                //
                decimal = beforeDecimal + afterDecimal;
                break;
            }
            else
            {
                decimal += (binary[i] - '0') * pow(2, n);
                n--;
            }
        }

        printf(" \n \n \t Decimal : %f \n \n", decimal);
        //
    }

    else if (option == 2)
    {

        float fullDecimal;
        printf("Enter any number:");
        scanf("%f", &fullDecimal);

        float floatingPart;

        int integerPart, r, l = 0, m[20], f, t = 0, remainderAmount = 0, s;

        integerPart = fullDecimal;
        floatingPart = fullDecimal - integerPart;
        //
        printf("\n");

        printf("Your Binary : ");
        //
        while (integerPart != 0)
        {
            f = integerPart % 2;
            integerPart /= 2;
            m[t] = f;
            remainderAmount += 1; // Amount of remaider keep increasing
            t++;
        }
        for (r = remainderAmount - 1; r >= 0; r--) // Print all the remainder backward
        {
            printf("%d", m[r]);
        }

        //
        printf(".");
        //
        for (s = 1; s <= 8; s++)
        {
            floatingPart = floatingPart * 2;
            l = floatingPart;
            printf("%d", l);
            if (l == 1)
                floatingPart = floatingPart - l;
        }
        printf("\n \n \n");
    }

    // Vicheka's Part (Octal to Binary)

    else if (option == 5)
    {
        char octalnum[1000];
        long q = 0;

        printf("Enter any octal number here :");
        scanf("%s", octalnum);
        //
        printf("\n Equivalent binary value: ");
        //
        while (octalnum[q])
        {
            switch (octalnum[q])
            {
            case '0':
                printf("000");
                break;
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            case '.':
                printf(".");
                break;
            default:
                printf("\n \n %c is not Binary Number \n \n", octalnum[q]);
            }
            q++;
        }
    }
    else
    {
        printf("error");
    }

    return 0;
}