#include<stdio.h>
void display(int array[], int length){
    for(int i=0; i<length; i++){
        printf("%d", array[i]);
    }
    printf("\n");
}

int main(){
    int array [] = {9,8,7,6,5,4,3,2,1};
    int temp, length = 9;
    int i = 0;
    int j=length-1;

    printf("Initial array: ");
    display(array, length);

    while(i<j){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }
    printf("Reverse of array: ");
    display(array, length);

    return 0;
}