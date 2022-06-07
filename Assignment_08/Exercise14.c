#include <stdio.h>
//#include <string.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int num1;
    printf("Enter another number:");
    scanf("%d", &num1);
    int num2;
    num2 = num + num1;
    printf("Add the two number:%d\n", num2);

    char choice;
    // printf("Do you want to add a number?");
    printf("Click y to continue! ");
    scanf(" %c", &choice);
    // char continue_program[0];
    // continue_program[0] = 'y';
    //int value = strcmp(choice,continue_program);
    int num3;
    int sum;
    if (choice == 'y'){
        do{
            printf("Input another number ");
            scanf("%d", &num3);
            sum = num3 + num2;
            printf("%d\n", sum);
            printf("Click y to continue! ");
            scanf(" %c", &choice);
           
        }while(choice=='y');
        
    }
    // while(choice == 'y')
    // {
    //     printf("Input another number ");
    //     scanf("%d", num3);
    //     sum = num3 + num2;
    //     printf("Click y to continue! ");
    //     scanf("%s", choice);
    //     if(choice != 'y'){
    //         printf("Final Total %d",sum);
    //         break;
    //     }
    // }
    
    // do{
    //     printf("Enter a number:");
    //     scanf("%d", &num3);
    //     sum = num2 + num3;
    // }while (choice == 'y');
    
}


