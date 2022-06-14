#include<stdio.h>
#include <conio.h>
int main(){
	
	int a[1000],i, n, min, max;
	
	// Enter value of array
	printf("Enter the value in array:");
	scanf("%d",&n);
	
	// Enter size of array
	printf("Enter the value in array:");
	for(i=0; i<n;i++){
		scanf("%d",& a[i]);	
	}
	min=max=a[0];
	for (i=1; i<n; i++){
		if(min>a[i]){
			min=a[i];
		} else if (max<a[i]){
			max=a[i];
		}
	}
	
	// display min and max
	printf(" min of array is=%d", min);
	printf("\n max of array is=%d", max);
	
	return 0;
}
