#include <stdio.h>
int main(){
    float number;
    printf("Enter the number:");
    scanf("%f", &number);
    if (number >= 20) { 
        printf("Too high");
    }   else {
        printf("Thank you!");
    }

return 0;

}
