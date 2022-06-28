case 1: 
		char binary1[30];
		printf("1.Binary to Decimal\n");
        printf("Enter The Binary: ");
        scanf("%s", binary1);
        //
        float decimal1 = 0,beforeDecimal1 = 0,afterDecimal1 = 0;
        int n = strlen(binary1) - 1; // Exponent (Use with when user doesn't enter Floating Number)
        int rightPower1 = 1,leftPower1;
        int i, j, k;
        // Finding position of point

        for (i = 0; i < strlen(binary1); i++)
        {
            if (binary1[i] == '.')
            {
                int afterPointPosition1 = i + 1;
                leftPower1 = i - 1;
                //
                // Before Faloating Point
                for (int j = 0; j < i; j++)
                {
                    beforeDecimal1 += (binary1[j] - '0') * pow(2, leftPower1);
                    leftPower1--;
                }
                // After Floating Point
                for (k = afterPointPosition1; k < strlen(binary1); k++)
                {
                    afterDecimal1 += (binary1[k] - '0') * pow(2, -rightPower1);
                    rightPower1++;
                }
                decimal1 = beforeDecimal1 + afterDecimal1;
                break;
            }
            else
            {
                decimal1 += (binary1[i] - '0') * pow(2, n);
                n--;
            }
        }
        printf("Binary to Decimal is : %f", decimal1);
    	break;
