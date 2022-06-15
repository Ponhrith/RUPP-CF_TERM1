#include<stdio.h>
//function to display array
void display(int array[], int length){
    for(int i=0; i<length; i++){
        printf("%d", array[i]);
    }
    printf("\n");
}

int main(){
    int array [] = {9,8,7,6,5,4,3,2,1};
    int temp, length = 9;
    int i = 0;   //for pointing 1st element of the array
    int j=length-1;  //for pointing last element of the array

    printf("Initial array: ");
    display(array, length);

    while(i<j){
        //swap
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