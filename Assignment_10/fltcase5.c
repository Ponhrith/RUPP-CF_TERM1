case 5: 
		char octalnum5[100];
        long q = 0;
		printf("5.Octal to Binary\n");
        printf("Enter The Octal: ");
        scanf("%s", octalnum5);
        printf("Octal to Binary is : ");
        while (octalnum5[q])
        {
            switch (octalnum5[q])
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
                printf("\n \n %c is not Binary Number \n \n", octalnum5[q]);
            }
            q++;
        }
        break;
