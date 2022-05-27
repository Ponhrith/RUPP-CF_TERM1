#include <stdio.h>
int main(){
    float number;
    printf("Enter the number:");
    scanf("%f", &number);
    if (number < 10) { 
        printf("Too low");
    }  else if (number > 10){
        printf("Correct");
    }  else if (number < 20){
        printf("Correct");
    }  else {
        printf("Too high");
    }  
    
return 0;

}
