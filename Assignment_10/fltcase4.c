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
