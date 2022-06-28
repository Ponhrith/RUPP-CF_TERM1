#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
int main(){
	int choice;
	
	printf("\nPlease Select the Menu");
	printf("\n1. Binary to Decimal");
	printf("\n2. Decimal to Binary");
	printf("\n3. Octal to Decimal");
	printf("\n4. Decimal to Octal");
	printf("\n5. Octal to Binary");
	printf("\n6. Binary to Octal");
	printf("\n7. Decimal to Hexadecimal");
	printf("\n8. Hexadecimal to Decimal");
	printf("\n9. Hexadecimal to Binary");
	printf("\n10. Binary to Hexadecimal");
	printf("\nEnter choice: ");
	scanf("%d", &choice);
    int decimal = 0, binary, base =1, rem, num;
	long index = 0; 
	int octal, place = 0;
	int count  =0 ; 
	switch(choice)
{
	
	case 1:
            //int decimal = 0, binary, base =1, rem, num; 
			printf("Enter the Binary number : ");
			scanf("%d", &binary);
	
			num = binary;
			while(binary)
	{
			rem = binary % 10;
			decimal = decimal + rem*base;
			binary = binary / 10;
			base = base * 2;
	}
		printf("\nDecimal equivalent of the Binary number %d is %d", num, decimal);
		break;
	

	case 2:
            //int binary =0, decimal, base =1, rem, num;
			printf("Enter the Decimal number : ");
			scanf("%d", &decimal);
	
			num = decimal;
			while(decimal)
	{
			rem = decimal % 2;
			binary = binary + rem*base;
			decimal = decimal / 2;
			base = base * 10;
	}
		printf("\nBinary equivalent of the Decimal number %d is %d", num, binary);
		break;
		

	case 3:
            //int octal, place = 0;
			//int octal, decimal = 0, rem  = 0, place = 0;
			place = 0;
			printf("Enter the octal number : ");
			scanf("%d", &octal);
	
			printf("\nDecimal Equivalent of the Octal number %d is ", octal);
			while(octal)
	{
			rem = octal % 10;
			decimal = decimal + rem * pow(8, place);
			octal = octal / 10;
			place++;
	}
		printf("%d", decimal);
		break;
		
		
	case 4:
			//int decimal , octal = 0, rem = 0, place = 1;
			printf("Enter the decimal number : ");
			scanf("%d", &decimal);
	
			printf("\nOctal Equivalent of the Decimal number %d is ", decimal);
			while(decimal)
	{
			rem = decimal % 8;
			octal = octal + rem * place;
			decimal = decimal / 8;
			place = place * 10;
	}
		printf("%d", octal);
		break;
		
		
	case 5:
			char octalNum[100];
    		//long index = 0; 
 
    		printf("Enter any octal number: ");
    		scanf("%s", octalNum);
    		printf("The binary value is: ");
    		while (octalNum[index])
    {
        switch (octalNum[index])
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
            printf("\n Invalid octal digit %c ", octalNum[index]);
            return 0;
        }
        index++;
        
	}
		break;
		
		
	case 6:
			octal=0;
			count=1;
			int  i=0, mul=1, octnum[20];
    		printf("Enter any Binary Number: ");
    		scanf("%d", &binary);
    		while(binary!=0)
    {
        	rem = binary%10;
        	octal = octal + (rem*mul);
        	if(count%3==0)
        {
            octnum[i] = octal;
            mul = 1;
            octal = 0;
            count = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            count++;
        }
        	binary = binary/10;
    }
    		if(count!=1)
        	octnum[i] = octal;
    		printf("\nEquivalent Octal Value = ");
    		for(i=i; i>=0; i--)
        	printf("%d", octnum[i]);
   			getch();
			break;
			
			
	case 7:
			char hex[17];
    		//long long decimal, place;
    		int y = 0, val, len;

    		decimal = 0;
    		place = 1;

    /* Input hexadecimal number from user */
    printf("Enter any hexadecimal number: ");
    gets(hex);

    /* Find the length of total number of hex digit */
    len = strlen(hex);
    len--;

    /*
     * Iterate over each hex digit
     */
    for(y=0; hex[y]!='\0'; y++)
    {
 
        /* Find the decimal representation of hex[i] */
        if(hex[y]>='0' && hex[y]<='9')
        {
            val = hex[y] - 48;
        }
        else if(hex[y]>='a' && hex[y]<='f')
        {
            val = hex[y] - 97 + 10;
        }
        else if(hex[y]>='A' && hex[y]<='F')
        {
            val = hex[y] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);
			break;
			
			
	case 8:
				char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    			long long tempDecimal;
    			char hexNum8[65];
    			//int index, rem;
    /* Input decimal number from user */
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
    tempDecimal = decimal;

    index = 0;
    
    /* Decimal to hexadecimal conversion */
    while(tempDecimal !=0)
    {
        rem = tempDecimal % 16;

        hexNum8[index] = HEXVALUE[rem];

        tempDecimal /= 16;

        index++;
    }
    hexNum8[index] = '\0';

    strrev(hexNum8);

    printf("\nDecimal number = %lld\n", decimal);
    printf("Hexadecimal number = %s", hexNum8);
    		break;
    		
    		
	case 9:
				char hexNum[100];
				//long int count=0;
				count=0;
	printf("Enter a hexadecimal number To Convet it into Binary : ");
	scanf("%s",hexNum);
	printf("\nBinary Number is : ");
	while(hexNum[count])
	{
		switch(hexNum[count])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
        case '.' : printf(".");
        break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",hexNum[count]);
		}
		count++;
        
			
	}
			break;
    case 10:
        char hexNumPheaktra[100];
	long countPheaktra=0;
	printf("Enter a hexadecimal number To Convet it into Binary : ");
	scanf("%s",hexNumPheaktra);
	printf("\nBinary Number is : ");
	while(hexNumPheaktra[countPheaktra])
	{
		switch(hexNumPheaktra[countPheaktra])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
        case '.' : printf(".");
        break;			
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("%c",hexNumPheaktra[countPheaktra]);
		}
		countPheaktra++;
	}
        break;
			
			
	return 0;
}

}
