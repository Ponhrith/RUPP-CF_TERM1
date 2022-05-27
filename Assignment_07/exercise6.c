#include <stdio.h>
int main(){
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("Result: %d = %d", num1, num2);
    }
    else if(num1 > num2){
        printf("Result: %d > %d", num1, num2);
    }
    else{
        printf("Result: %d < %d", num1, num2);
    }

    return 0;
}