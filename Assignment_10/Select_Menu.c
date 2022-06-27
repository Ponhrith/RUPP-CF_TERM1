#include <stdio.h>
#include <math.h>
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
	switch(choice)
	{
	
	case 1: 
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
            int binary =0, decimal, base =1, rem, num;
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
    }
	return 0;
}


