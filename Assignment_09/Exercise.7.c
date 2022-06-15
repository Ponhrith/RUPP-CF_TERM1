#include <stdio.h>
int main(){
    // Declare Variables
    int arr[15] = {1,3,5,7,12,11,16,18,19,9,11,2,3,5,1};
    int i = 0, j = 0;
    int temp,n=15;
    while(j < n){
        if(arr[i+1] > arr[i]){
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        i++;
        if(i >= n){
            j++;
            i = 0;
        }
    }
    // check if there are the same numbers then output the same numbers will write only one time
    while(i < n){
        if(arr[i] == arr[i + 1]){
            arr[i] = 0;
        }
    // If the same numbers already get rid of will not count in the output again or the same numbers will not replace by 0
        if(arr[i] != 0){
            printf("%d\n", arr[i]); 
        }
        i++;
    }

    return 0;
}
