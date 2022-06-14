#include<stdio.h>

void sort(int num[], int size){

    for(int i =0; i<size - 1; i++){
        for(int j = 0; j < size -i - 1; j++){
           if(num[j] < num[j+1]){
               int temp = num[i];
               num[j] = num[j+1];
               num[j+1] = temp;
           } 
        }
    }
}

void printNum(int num[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", num[i]);
    }
}


int main(){
    int num[] = {3,1,7,4,7,2,8,5,0,6,9};
    int size = sizeof(num)/sizeof(num[0]);

    sort(num, size);
    printNum(num, size);

    return 0;
}


