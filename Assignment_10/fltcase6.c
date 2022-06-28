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
