#include <stdio.h>
int main()
{
	char ch;
	
	// input enter by user
	printf("Enter any character:\n ");
	scanf("%c",&ch);
	
	// checking alphabet
	if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
	{
		printf("%c is an alphabet",ch);
	}
	// checking digit
	else if (ch>='0' && ch<='9' )
	{
		printf(" %c is an digit",ch);
	}
	// checking special character
	else
	{
	printf ("%c is a special character");
	}
	
	return 0;
}
