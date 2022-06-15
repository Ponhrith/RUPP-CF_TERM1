#include <stdio.h>
int main (){
	// Declare Variable
	int arr[] = {7,10,4,5,3,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
    // loop check if an element is a leader is greater than all the elements to its right side
            if (arr[i] < arr[j])
            {
                break;
            }

            if (j == n - 1)
            // Display the leader
                printf("%d is a leader\n", arr[i]);
        }
    }
}

