#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int choose,a,b,c,d;
    //display some information to let user choose
    printf("\nChoose the type that you want to covert\n");
    printf("1.Binary        to     Decimal\n");
    printf("2.Decimal       to     Binary\n");
    printf("3.Octal         to     Decimal\n");
    printf("4.Decimal       to     Octal\n");
    printf("5.Octal         to     Binary\n");
    printf("6.Binary        to     Octal\n");
    printf("7.Decimal       to     Hexadecimal\n");
    printf("8.Hexadecimal   to     Decimal\n");
    printf("9.Hexadecimal   to     Binary\n");
    printf("10.Binary       to     Hexadecimal\n");
    printf("\nEnter the number of type : ");scanf("%d",&choose);
    
    //case 1
    char binary1[100];
    int am1,size1=0,ibinary1[100],ibinaryn1[100],sump=0,error1=0;
    float sumn=0,sum=0;
    //case 2
    int am2,temp2,idecimal2,ibinary2[100],inbinary2[100];
    float decimal2,fdecimal2;
    //case 3
    char octal3[100];
    int am3,size3=0,ioctal3[100],ioctaln3[100],sump3=0,error3=0;
    float sumn3=0,sum3=0;
    //case 4
    int am4,temp4,idecimal4,ioctal4[100],inoctal4[100];
    float decimal4,fdecimal4;
    //case 5
    char octal5[100],binary5[100][3];
    int am5,error5=0;
    //case 6
    char binary6[100];
    int am6,iam6,error6=0,size6,ibinary6[100],ioctal6[100],inoctal6[100],inbinary6[100];
    //case 7
    char chexa7[100],cnhexa7[100];
    int am7,temp7,idecimal7,ihexa7[100],inhexa7[100];
    float decimal7,fdecimal7;
    //case 8
    char hexa8[100];
    int am8,size8=0,x,y,ihexa8[100],ihexa8n[100],sump8=0,error8=0;
    float sumn8=0,sum8=0;
    //case 9
    char hexa9[100],binary9[100][4];
    int am9,error9=0;
    //case 10
    char binary10[100];
    int am10,iam10,error10=0,size10,ibinary10[100],ihexa10[100],inhexa10[100],inbinary10[100];
    switch (choose)
    {
        case 1:
            //get number from user
            printf("1.Binary to Decimal\n");
            printf("\nEnter Binary : ");scanf("%s",binary1);
            //find lenght after user input
            am1=strlen(binary1);
            //find error if number not 0 and 1
            for(a=0;a<am1;a++){
                if(binary1[a]<'.'||binary1[a]>'1'||binary1[a]=='/'){
                    printf("Error\n");
                    error1=1; 
                    break;
                }
            }
            //find the place of '.' 
            for(a=0;a<am1;a++){
                if(binary1[a]=='.'){
                    size1=a;
                    break;
                } 
                else size1=am1;
            }
            //if not error continue caculate
            if(error1==0){
                //convert from char to int
                for(a=0;a<size1;a++){
                    ibinary1[a]=binary1[a]-'0';
                }
                //caculate integer number from binary to decimal
                for(a=size1-1,b=0;a>=0;a--,b++){
                    sump+=ibinary1[a]*pow(2,b);
                }
                //if binary is float continue caculate
                if(size1<am1){
                    //change number after . from char to int
                    for(a=size1+1,b=0;a<am1;a++,b++){
                        ibinaryn1[b]=binary1[a]-'0';
                    }
                    //amount of number after '.'
                    am1=b;
                    //caculate number after '.' from binary to decimal
                    for(a=0,b=-1;a<am1;a++,b--){
                        sumn+=ibinaryn1[a]*pow(2,b);
                    }
                }
                //sum decimal after caculate before'.'and after'.' together
                sum=sump+sumn;
                //display the result
                printf("\n%s Binary in Decimal is %g\n",binary1,sum);
            }
        break;       
        case 2:
            //get number from user
            printf("\n2.Decimal to Binary\n");
            printf("\nEnter Decimal : ");scanf("%f",&decimal2);
            //make float to int to get nuber before '.'
            idecimal2=decimal2;
            //caculate decimal to binary
            for(a=0;idecimal2/2>0;a++){
                ibinary2[a]=idecimal2%2;
                idecimal2/=2;
            }
                ibinary2[a]=idecimal2%2;
                am2=a+1;
            //reverse number in array after caculate
            for(a=0,b=am2-1;a<b;a++,b--){
                temp2=ibinary2[a],
                ibinary2[a]=ibinary2[b],
                ibinary2[b]=temp2;
            }
            //print some information
            printf("\n%g Decimal to Binary is ",decimal2);
            //display result of number before'.'
            for(a=0;a<am2;a++){
                printf("%d",ibinary2[a]);
            }
            //just take number after '.'
            idecimal2=decimal2;
            fdecimal2=decimal2-idecimal2;
            //if after '.' has number continue caculate
            if(fdecimal2!=0){
                //printf '.'
                printf(".");
                //caculate number after'.' decimal to binary
                for(a=0;a<6;a++){
                    inbinary2[a]=fdecimal2*2,
                    fdecimal2=(fdecimal2*2)-inbinary2[a];
                }
                //display result of number after'.'
                for(a=0;a<6;a++){
                    printf("%d",inbinary2[a]);
                }
            }
        break;
        case 3:
            //get number from user
            printf("\n3.Octal to Decimal\n");
            printf("\nEnter Octal : ");scanf("%s",octal3);
            //find lenght after user input
            am3=strlen(octal3);
            //find error if number not 0 to 7
            for(a=0;a<am3;a++){
                if(octal3[a]<'.'||octal3[a]>'7'||octal3[a]=='/'){
                    printf("Error\n");
                    error3=1; 
                    break;
                }
            }
            //find the place of '.' 
            for(a=0;a<am3;a++){
                if(octal3[a]=='.'){
                    size3=a;
                    break;
                }
                else size3=am3;
            }
            //if not error continue caculate
            if(error3==0){
                //convert from char to int
                for(a=0;a<size3;a++){
                    ioctal3[a]=octal3[a]-'0';
                }
                //caculate number from octal to decimal
                for(a=size3-1,b=0;a>=0;a--,b++){
                    sump3+=ioctal3[a]*pow(8,b);
                }
                //if octal is float continue caculate
                if(size3<am3){
                    //change number after . from char to int
                    for(a=size3+1,b=0;a<am3;a++,b++){
                        ioctaln3[b]=octal3[a]-'0';
                    }
                    //amount of number after '.'
                    am3=b;
                    //caculate number after '.' from octal to decimal
                    for(a=0,b=-1;a<am3;a++,b--){
                        sumn3+=ioctaln3[a]*pow(8,b);
                    }
                }
                //sum decimal after caculate before'.'and after'.' together
                sum3=sump3+sumn3;
                //display the result
                printf("\n%s Octal in Decimal is %g\n",octal3,sum3);
            }
        break;
        case 4:
            //get number from user
            printf("\n4.Decimal to Octal");
            printf("\nEnter Decimal : ");scanf("%f",&decimal4);
            //make float to int to get nuber before '.'
            idecimal4=decimal4;
            //caculate decimal to octal
            for(a=0;idecimal4/8>0;a++){
                ioctal4[a]=idecimal4%8;
                idecimal4/=8;
            }
                ioctal4[a]=idecimal4%8;
                am4=a+1;
            //reverse number in array after caculate
            for(a=0,b=am4-1;a<b;a++,b--){
                temp4=ioctal4[a],
                ioctal4[a]=ioctal4[b],
                ioctal4[b]=temp4;
            }
            //print some information
            printf("\n%g Decimal in Octal is ",decimal4);
            //display result of number before'.'
            for(a=0;a<am4;a++){
                printf("%d",ioctal4[a]);
            }
            //just take number after '.'
            idecimal4=decimal4;
            fdecimal4=decimal4-idecimal4;
            //if after '.' has number continue caculate
            if(fdecimal4!=0){
                //printf '.'
                printf(".");
                //caculate number after'.' decimal to octal
                for(a=0;a<6;a++){
                    inoctal4[a]=fdecimal4*8,
                    fdecimal4=(fdecimal4*8)-inoctal4[a];
                }
                //display result of number after'.'
                for(a=0;a<6;a++){
                    printf("%d",inoctal4[a]);
                }
            }
        break;
        case 5:
            //get number from user
            printf("\n5.Octal to Binary\n");
            printf("\nEnter Octal : ");scanf("%s",octal5);
            //find length of octal
            am5=strlen(octal5);
            //convert octal to binary
            for(a=0;a<am5;a++){
                if(octal5[a]=='0'){
                    binary5[a][0]='0';
                    binary5[a][1]='0';
                    binary5[a][2]='0';
                }
                else if(octal5[a]=='1'){
                    binary5[a][0]='0';
                    binary5[a][1]='0';
                    binary5[a][2]='1';
                }
                else if(octal5[a]=='2'){
                    binary5[a][0]='0';
                    binary5[a][1]='1';
                    binary5[a][2]='0';
                }
                else if(octal5[a]=='3'){
                    binary5[a][0]='0';
                    binary5[a][1]='1';
                    binary5[a][2]='1';
                }
                else if(octal5[a]=='4'){
                    binary5[a][0]='1';
                    binary5[a][1]='0';
                    binary5[a][2]='0';
                }
                else if(octal5[a]=='5'){
                    binary5[a][0]='1';
                    binary5[a][1]='0';
                    binary5[a][2]='1';
                }
                else if(octal5[a]=='6'){
                    binary5[a][0]='1';
                    binary5[a][1]='1';
                    binary5[a][2]='0';
                }
                else if(octal5[a]=='7'){
                    binary5[a][0]='1';
                    binary5[a][1]='1';
                    binary5[a][2]='1';
                }
                else if(octal5[a]=='.'){
                    binary5[a][0]=' ';
                    binary5[a][1]='.';
                    binary5[a][2]=' ';
                }
                //if input other from octal print error
                else {
                    printf("Error");
                    error5=1;
                    break;
                }
            }
            //if not error continue caculate
            if(error5==0){
                //printf some information
                printf("%s Octal in Binary is ",octal5);
                //display result after covert
                for(a=0;a<am5;a++){
                    for(b=0;b<3;b++){
                        printf("%c",binary5[a][b]);
                    }
                }
            }
        break;
        case 6:
            //get number from user
            printf("\n6.Binary to Octal\n");
            printf("\nEnter Binary : ");scanf("%s",binary6);
            //find length of octal
            am6=strlen(binary6);
            //find error
            for(a=0;a<am6;a++){
                if(binary6[a]<'.'||binary6[a]>'1'||binary6[a]=='/'){
                    printf("Error");
                    error6=1;
                    break;
                }
            }
            //find place of '.'
            for(a=0;a<am6;a++){
                if(binary6[a]=='.'){
                    size6=a;
                    break;
                }
                else size6=am6;
            }
            if(error6==0){
                //convert from char to int
                for(a=0;a<size6;a++){
                    ibinary6[a]=binary6[a]-'0';
                }
                //give all octal array to 0 prevent error
                for(a=0;a<size6;a++){
                    ioctal6[a]=0;
                }
                //caculate binary to octal number befor '.'
                c=0;
                for(a=size6-1,b=0;a>=0;a--,b++){
                    ioctal6[c]+=(ibinary6[a]*pow(2,b));
                    if(b==2){
                        b=-1,c++;
                    }
                    //find the lenght of ioctal
                    iam6=c+1;
                }
                //print out some information
                printf("\n%s Binary in Octal is ",binary6);
                for(a=iam6-1;a>=0;a--){
                    printf("%d",ioctal6[a]);
                }
                //if atfer '.' have number comtinue caculate
                if(size6<am6){
                    printf(".");
                    //convert from char to int
                    for(a=size6+1,b=0;a<am6;a++,b++){
                        inbinary6[b]=binary6[a]-'0';
                    }
                    iam6=b;
                    //give all octal array to 0 prevent error
                    for(a=0;a<iam6;a++){
                        inoctal6[a]=0;
                    }
                    //caculate binary to octal number after'.'
                    a=0;
                    for(b=0,c=2;b<iam6;b++,c--){
                        inoctal6[a]+=inbinary6[b]*pow(2,c);
                        if(b==2){
                            c=3,a++;
                        }
                    }
                    //find length of octal after '.'
                    iam6=a+1;
                    //display result after caculate
                    for(a=0;a<iam6;a++){
                        printf("%d",inoctal6[a]);
                    }
                }
            }
        break;
        case 7:
            //get number from user
            printf("\n7.Decimal to Hexadecimal\n");
            printf("\nEnter Decimal : ");scanf("%f",&decimal7);
            //make float to int to get nuber before '.'
            idecimal7=decimal7;
            //caculate decimal to hexadecimal
            for(a=0;idecimal7/16>0;a++){
                ihexa7[a]=idecimal7%16;
                idecimal7/=16;
            }
                ihexa7[a]=idecimal7%16;
                am7=a+1;
            //reverse number in array after caculate
            for(a=0,b=am7-1;a<b;a++,b--){
                temp7=ihexa7[a],
                ihexa7[a]=ihexa7[b],
                ihexa7[b]=temp7;
            }
            //change from int to char and 10~15 change to A~F
            for(a=0;a<am7;a++){
                if(ihexa7[a]>=0&&ihexa7[a]<=9){
                    chexa7[a]=ihexa7[a]+'0';
                }
                else if(ihexa7[a]==10){
                    chexa7[a]='A';
                }
                else if(ihexa7[a]==11){
                    chexa7[a]='B';
                }
                else if(ihexa7[a]==12){
                    chexa7[a]='C';
                }
                else if(ihexa7[a]==13){
                    chexa7[a]='D';
                }
                else if(ihexa7[a]==14){
                    chexa7[a]='E';
                }
                else if(ihexa7[a]==15){
                    chexa7[a]='F';
                }
            }
            //print some information
            printf("\n%g Decimal in Hexadecimal is ",decimal7);
            //display result of number before'.'
            for(a=0;a<am7;a++){
                printf("%c",chexa7[a]);
            }
            //just take number after '.'
            idecimal7=decimal7;
            fdecimal7=decimal7-idecimal7;
            //if after '.' has number continue caculate
            if(fdecimal7!=0){
                //printf '.'
                printf(".");
                //caculate number after'.' decimal to hexadecimal
                for(a=0;a<6;a++){
                    inhexa7[a]=fdecimal7*16,
                    fdecimal7=(fdecimal7*16)-inhexa7[a];
                }
                //change from int to char and 10~15 change to A~F
                for(a=0;a<6;a++){
                    if(inhexa7[a]>=0&&inhexa7[a]<=9){
                        cnhexa7[a]=inhexa7[a]+'0';
                    }
                    else if(inhexa7[a]==10){
                        cnhexa7[a]='A';
                    }
                    else if(inhexa7[a]==11){
                        cnhexa7[a]='B';
                    }
                    else if(inhexa7[a]==12){
                        cnhexa7[a]='C';
                    }
                    else if(inhexa7[a]==13){
                        cnhexa7[a]='D';
                    }
                    else if(inhexa7[a]==14){
                        cnhexa7[a]='E';
                    }
                    else if(inhexa7[a]==15){
                        cnhexa7[a]='F';
                    }
                }
                //display result of number after'.'
                for(a=0;a<6;a++){
                    printf("%c",cnhexa7[a]);
                }
            }
        break;
        case 8:
            //get number from user
            printf("\n8.Hexadecimal to Decimal\n");
            printf("\nEnter Hexadecimal : ");scanf("%s",hexa8);
            //find lenght after user input
            am8=strlen(hexa8);
            //find error if number not 0 to F
            for(x=0;x<am8;x++){
                if(hexa8[x]<'.'||hexa8[x]=='/'||hexa8[x]>'9'&&hexa8[x]<'A'||hexa8[x]>'F'&&hexa8[x]<'a'||hexa8[x]>'f'){
                    printf("Error\n");
                    error8=1; 
                    break;
                }
            }
            //find the place of '.' 
            for(x=0;x<am8;x++){
                if(hexa8[x]=='.'){
                    size8=x;
                    break;
                }
                else size8=am8;
            }
            //if not error continue caculate
            if(error8==0){
                //convert from char to int
                for(x=0;x<size8;x++){
                    if(hexa8[x]>='0'&&hexa8[x]<='9'){
                        ihexa8[x]=hexa8[x]-'0';
                    }
                    else if(hexa8[x]=='a'||hexa8[x]=='A'){
                        ihexa8[x]=10;
                    }
                    else if(hexa8[x]=='b'||hexa8[x]=='B'){
                        ihexa8[x]=11;
                    }
                    else if(hexa8[x]=='c'||hexa8[x]=='C'){
                        ihexa8[x]=12;
                    }
                    else if(hexa8[x]=='d'||hexa8[x]=='D'){
                        ihexa8[x]=13;
                    }
                    else if(hexa8[x]=='e'||hexa8[x]=='E'){
                        ihexa8[x]=14;
                    }
                    else if(hexa8[x]=='f'||hexa8[x]=='F'){
                        ihexa8[x]=15;
                    }
                }
                //caculate number from Hexadecimal to decimal
                for(x=size8-1,y=0;x>=0;x--,y++){
                    sump8+=ihexa8[x]*pow(16,y);
                }
                //if Hexadecimal is float continue caculate
                if(size8<am8){
                    //change number after . from char to int
                    for(x=size8+1,y=0;x<am8;x++,y++){
                        if(hexa8[x]>='0'&&hexa8[x]<='9'){
                            ihexa8n[y]=hexa8[x]-'0';
                        }
                        else if(hexa8[x]=='a'||hexa8[x]=='A'){
                            ihexa8n[y]=10;
                        }
                        else if(hexa8[x]=='b'||hexa8[x]=='B'){
                            ihexa8n[y]=11;
                        }
                        else if(hexa8[x]=='c'||hexa8[x]=='C'){
                            ihexa8n[y]=12;
                        }
                        else if(hexa8[x]=='d'||hexa8[x]=='D'){
                            ihexa8n[y]=13;
                        }
                        else if(hexa8[x]=='e'||hexa8[x]=='E'){
                            ihexa8n[y]=14;
                        }
                        else if(hexa8[x]=='f'||hexa8[x]=='F'){
                            ihexa8n[y]=15;
                        }
                    }
                    //amount of number after '.'
                    am8=y;
                    //caculate number after '.' from Hexadecimal to decimal
                    for(x=0,y=-1;x<am8;x++,y--){
                        sumn8+=ihexa8n[x]*pow(16,y);
                    }
                }
                //sum decimal after caculate before'.'and after'.' together
                sum8=sump8+sumn8;
                //display the result
                printf("\n%s Hexadecimal in Decimal is %g\n",hexa8,sum8);
            }
        break;
        case 9:
            //get number from user
            printf("\n9.Hexadecimal to Binary\n");
            printf("\nEnter Hexadecimal : ");scanf("%s",hexa9);
            //find length of octal
            am9=strlen(hexa9);
            //convert hexadecimal to binary
            for(a=0;a<am9;a++){
                if(hexa9[a]=='0'){
                    binary9[a][0]='0';
                    binary9[a][1]='0';
                    binary9[a][2]='0';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='1'){
                    binary9[a][0]='0';
                    binary9[a][1]='0';
                    binary9[a][2]='0';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='2'){
                    binary9[a][0]='0';
                    binary9[a][1]='0';
                    binary9[a][2]='1';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='3'){
                    binary9[a][0]='0';
                    binary9[a][1]='0';
                    binary9[a][2]='1';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='4'){
                    binary9[a][0]='0';
                    binary9[a][1]='1';
                    binary9[a][2]='0';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='5'){
                    binary9[a][0]='0';
                    binary9[a][1]='1';
                    binary9[a][2]='0';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='6'){
                    binary9[a][0]='0';
                    binary9[a][1]='1';
                    binary9[a][2]='1';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='7'){
                    binary9[a][0]='0';
                    binary9[a][1]='1';
                    binary9[a][2]='1';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='8'){
                    binary9[a][0]='1';
                    binary9[a][1]='0';
                    binary9[a][2]='0';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='9'){
                    binary9[a][0]='1';
                    binary9[a][1]='0';
                    binary9[a][2]='0';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='A'||hexa9[a]=='a'){
                    binary9[a][0]='1';
                    binary9[a][1]='0';
                    binary9[a][2]='1';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='B'||hexa9[a]=='b'){
                    binary9[a][0]='1';
                    binary9[a][1]='0';
                    binary9[a][2]='1';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='C'||hexa9[a]=='c'){
                    binary9[a][0]='1';
                    binary9[a][1]='1';
                    binary9[a][2]='0';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='D'||hexa9[a]=='d'){
                    binary9[a][0]='1';
                    binary9[a][1]='1';
                    binary9[a][2]='0';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='E'||hexa9[a]=='e'){
                    binary9[a][0]='1';
                    binary9[a][1]='1';
                    binary9[a][2]='1';
                    binary9[a][3]='0';
                }
                else if(hexa9[a]=='F'||hexa9[a]=='f'){
                    binary9[a][0]='1';
                    binary9[a][1]='1';
                    binary9[a][2]='1';
                    binary9[a][3]='1';
                }
                else if(hexa9[a]=='.'){
                    binary9[a][0]=' ';
                    binary9[a][1]='.';
                    binary9[a][2]=' ';
                    binary9[a][3]=' ';
                }
                //if input other from hexadecimal print error
                else {
                    printf("Error");
                    error9=1;
                    break;
                }
            }
            //if not error continue caculate
            if(error9==0){
                //printf some information
                printf("%s Hecadecimal in Binary is ",hexa9);
                //display result after covert
                for(a=0;a<am9;a++){
                    for(b=0;b<4;b++){
                        printf("%c",binary9[a][b]);
                    }
                }
            }
        break;
        case 10:
            //get number from user
            printf("\n10.Binary to Hexadecimal\n");
            printf("\nEnter Binary : ");scanf("%s",binary10);
            //find length of Hexadecimal
            am10=strlen(binary10);
            //find error
            for(a=0;a<am10;a++){
                if(binary10[a]<'.'||binary10[a]>'1'||binary10[a]=='/'){
                    printf("Error");
                    error10=1;
                    break;
                }
            }
            //find place of '.'
            for(a=0;a<am10;a++){
                if(binary10[a]=='.'){
                    size10=a;
                    break;
                }
                else size10=am10;
            }
            //if not error continue caculate
            if(error10==0){
                //convert from char to int
                for(a=0;a<size10;a++){
                    ibinary10[a]=binary10[a]-'0';
                }
                //give all Hexadecimal array to 0 prevent error
                for(a=0;a<size10;a++){
                    ihexa10[a]=0;
                }
                //caculate binary to Hexadcimal number befor '.'
                c=0;d=0;
                for(a=size10-1,b=0;a>=0;a--,b++){
                    d++;
                    ihexa10[c]+=(ibinary10[a]*pow(2,b));
                    if(d%4==0){
                        b=-1,c++;
                    }
                }
                //print out some information
                printf("\n%s Binary in Hexadecimal is ",binary10);
                for(a=c;a>=0;a--){
                    if(ihexa10[a]>=0&&ihexa10[a]<=9){
                        printf("%d",ihexa10[a]);
                    }
                    else if(ihexa10[a]==10){
                        printf("A");
                    }
                    else if(ihexa10[a]==11){
                        printf("B");
                    }
                    else if(ihexa10[a]==12){
                        printf("C");
                    }
                    else if(ihexa10[a]==13){
                        printf("D");
                    }
                    else if(ihexa10[a]==14){
                        printf("E");
                    }
                    else if(ihexa10[a]==15){
                        printf("F");
                    }
                }
                //if atfer '.' have number comtinue caculate
                if(size10<am10){
                    printf(".");
                    //convert from char to int
                    for(a=size10+1,b=0;a<am10;a++,b++){
                       inbinary10[b]=binary10[a]-'0';
                    }
                    iam10=b;
                    //give all Hexadecimal array to 0 prevent error
                    for(a=0;a<iam10;a++){
                        inhexa10[a]=0;
                    }
                    //caculate binary to Hexadecimal number after'.'
                    a=0,d=0;
                    for(b=0,c=3;b<iam10;b++,c--){
                        d++;
                        inhexa10[a]+=inbinary10[b]*pow(2,c);
                        if(d%4==0){
                            c=4,a++;
                        }
                    }
                    c=a;
                   //display result after caculate
                    for(a=0;a<=c;a++){
                        if(inhexa10[a]>=0&&inhexa10[a]<=9){
                            printf("%d",inhexa10[a]);
                       }
                       else if(inhexa10[a]==10){
                            printf("A");
                        }
                        else if(inhexa10[a]==11){
                            printf("B");
                        }
                        else if(inhexa10[a]==12){
                            printf("C");
                        }
                        else if(inhexa10[a]==13){
                            printf("D");
                        }
                        else if(inhexa10[a]==14){
                            printf("E");
                        }
                        else if(inhexa10[a]==15){
                            printf("F");
                        }
                    }
                }
            }
        break;
        default:
            printf("Error");
        break;
    }
    return 0;
}