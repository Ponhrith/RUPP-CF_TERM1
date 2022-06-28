#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
int main(){
	int a,b,c,choice;
	
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
            char binary1[30];
		printf("1.Binary to Decimal\n");
        printf("Enter The Binary: ");
        scanf("%s", binary1);
        //
        float decimal1 = 0,beforeDecimal1 = 0,afterDecimal1 = 0;
        int n = strlen(binary1) - 1; // Exponent (Use with when user doesn't enter Floating Number)
        int rightPower1 = 1,leftPower1;
        int i1, j1, k1;
        // Finding position of point

        for (i1 = 0; i1 < strlen(binary1); i1++)
        {
            if (binary1[i1] == '.')
            {
                int afterPointPosition1 = i1 + 1;
                leftPower1 = i1 - 1;
                //
                // Before Faloating Point
                for (int j1 = 0; j1 < i1; j1++)
                {
                    beforeDecimal1 += (binary1[j1] - '0') * pow(2, leftPower1);
                    leftPower1--;
                }
                // After Floating Point
                for (k1 = afterPointPosition1; k1 < strlen(binary1); k1++)
                {
                    afterDecimal1 += (binary1[k1] - '0') * pow(2, -rightPower1);
                    rightPower1++;
                }
                decimal1 = beforeDecimal1 + afterDecimal1;
                break;
            }
            else
            {
                decimal1 += (binary1[i1] - '0') * pow(2, n);
                n--;
            }
        }
        printf("Binary to Decimal is : %f", decimal1);
    	break;
	

	case 2:
            float Decimal2;
		printf("2.Decimal to Binary\n");
        printf("Enter the Decimal: ");
        scanf("%f", &Decimal2);

        float floatingPart2;
        int integerPart2, r2, l = 0, m2[20], f2, t2 = 0, remainderAmount = 0, s2;
        integerPart2 = Decimal2;
        floatingPart2 = Decimal2 - integerPart2;
        printf("Decimal to Binary is : ");
        while (integerPart2 != 0)
        {
            f2 = integerPart2 % 2;
            integerPart2 /= 2;
            m2[t2] = f2; 
            remainderAmount += 1; // Amount of remaider keep increasing
            t2++;
        }
        for (r2 = remainderAmount - 1; r2 >= 0; r2--) // Print all the remainder backward
        {
            printf("%d", m2[r2]);
        }

        printf(".");
        for (s2 = 1; s2 <= 8; s2++)
        {
            floatingPart2 = floatingPart2 * 2;
            l = floatingPart2;
            printf("%d", l);
            if (l == 1)
                floatingPart2 = floatingPart2 - l;
        }
        break;

		

	case 3:
            char octal3[100];
   			int am3,size3=0,ioctal3[100],ioctaln3[100],sump3=0,error3=0;
    		float sumn3=0,sum3=0;
            printf("3.Octal to Decimal\n");
            printf("Enter Octal: ");
			scanf("%s",octal3);
            am3=strlen(octal3);
            for(a=0;a<am3;a++){
                if(octal3[a]=='.'){
                    size3=a;
                    break;
                }
                else size3=am3;
            }
            if(error3==0){
                for(a=0;a<size3;a++){
                    ioctal3[a]=octal3[a]-'0';
                }
                for(a=size3-1,b=0;a>=0;a--,b++){
                    sump3+=ioctal3[a]*pow(8,b);
                }
                if(size3<am3){
                    for(a=size3+1,b=0;a<am3;a++,b++){
                        ioctaln3[b]=octal3[a]-'0';
                    }
                    am3=b;
                    for(a=0,b=-1;a<am3;a++,b--){
                        sumn3+=ioctaln3[a]*pow(8,b);
                    }
                }
                sum3=sump3+sumn3;
                printf("\n%s Octal in Decimal is %g\n",octal3,sum3);
            }
        break;
		
		
	case 4:
			int am4,temp4,idecimal4,ioctal4[100],inoctal4[100];
    		float decimal4,fdecimal4;
            printf("4.Decimal to Octal\n");
            printf("Enter the Decimal: ");
			scanf("%f",&decimal4);
            idecimal4=decimal4;
            for(a=0;idecimal4/8>0;a++){
                ioctal4[a]=idecimal4%8;
                idecimal4/=8;
            }
                ioctal4[a]=idecimal4%8;
                am4=a+1;
            for(a=0,b=am4-1;a<b;a++,b--){
                temp4=ioctal4[a],
                ioctal4[a]=ioctal4[b],
                ioctal4[b]=temp4;
            }
            printf("Decimal to Octal is ",decimal4);
            for(a=0;a<am4;a++){
                printf("%d",ioctal4[a]);
            }
            idecimal4=decimal4;
            fdecimal4=decimal4-idecimal4;
            if(fdecimal4!=0){

                printf(".");
                for(a=0;a<6;a++){
                    inoctal4[a]=fdecimal4*8,
                    fdecimal4=(fdecimal4*8)-inoctal4[a];
                }
                for(a=0;a<6;a++){
                    printf("%d",inoctal4[a]);
                }
            }
        break;
		
		
	case 5:
			char octalNum[100];
    		
 
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
        case '.':
                printf(".");
                break;
        default:
            printf("\n Invalid octal digit %c ", octalNum[index]);
            return 0;
        }
        index++;
        
	}
		break;
		
		
	case 6:
			printf("6.Binary to Octal\n");
			char binary6[100];
    		int am6,iam6,error6=0,size6,ibinary6[100],ioctal6[100],inoctal6[100],inbinary6[100];
            printf("Enter the Binary: ");
			scanf("%s",binary6);
            am6=strlen(binary6);
            for(a=0;a<am6;a++){
                if(binary6[a]=='.'){
                    size6=a;
                    break;
                }
                else size6=am6;
            }
            if(error6==0){
                for(a=0;a<size6;a++){
                    ibinary6[a]=binary6[a]-'0';
                }
                for(a=0;a<size6;a++){
                    ioctal6[a]=0;
                }
                c=0;
                for(a=size6-1,b=0;a>=0;a--,b++){
                    ioctal6[c]+=(ibinary6[a]*pow(2,b));
                    if(b==2){
                        b=-1,c++;
                    }
                    iam6=c+1;
                }
                printf("Binary to Octal is ",binary6);
                for(a=iam6-1;a>=0;a--){
                    printf("%d",ioctal6[a]);
                }
                if(size6<am6){
                    printf(".");
                    for(a=size6+1,b=0;a<am6;a++,b++){
                        inbinary6[b]=binary6[a]-'0';
                    }
                    iam6=b;
                    for(a=0;a<iam6;a++){
                        inoctal6[a]=0;
                    }
                    a=0;
                    for(b=0,c=2;b<iam6;b++,c--){
                        inoctal6[a]+=inbinary6[b]*pow(2,c);
                        if(b==2){
                            c=3,a++;
                        }
                    }
                    iam6=a+1;
                    for(a=0;a<iam6;a++){
                        printf("%d",inoctal6[a]);
                    }
                }
            }
        break;
			
			
	case 7:
			char hex[17];
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
