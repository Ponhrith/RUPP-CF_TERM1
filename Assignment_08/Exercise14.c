#include <stdio.h>
int main(){
    int num, num1;
    char choice;

    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter another number:");
    scanf("%d", &num1);
    num1 += num; //num1 = num1 + num
    
    printf("Click y to continue!");
    scanf(" %c", &choice);
    if  (choice != 'y'){
        printf("Display the total %d", num1);
    }
    
    while (choice == 'y'){
    printf("Enter a new number:");
    scanf("%d", &num);

    num1 += num;

    printf("Click y to continue!");
    scanf(" %c", &choice);

    if  (choice != 'y'){
        printf("Display the total %d", num1);
        break;
    }
    }
    return 0;
}