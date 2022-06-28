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
