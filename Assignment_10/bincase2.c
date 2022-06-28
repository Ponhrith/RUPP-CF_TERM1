case 2: 
		float Decimal2;
		printf("2.Decimal to Binary\n");
        printf("Enter the Decimal: ");
        scanf("%f", &Decimal2);

        float floatingPart2;
        int integerPart2, r2, l = 0, m[20], f2, t2 = 0, remainderAmount = 0, s2;
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
