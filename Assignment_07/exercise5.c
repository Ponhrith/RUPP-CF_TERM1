#include <stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number < 10) { 
        printf("Too low");
    }  else if (number < 20) {
        printf("Correct");
    }  
    
    if (number > 20){
        printf("Too high");
    }
    
    return 0;

}
