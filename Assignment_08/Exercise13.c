#include <stdio.h>
int main(){
    int num;
    do{
        printf("Enter a number:"); //Ask users to input a number
        scanf("%d", &num);
    }while (num<=5); //keep asking until the value over 5
    if (num>5){ 
        printf("Your final number is %d", num);
    }
}