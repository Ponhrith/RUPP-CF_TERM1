#include<stdio.h>
int main()
{
	// set variable
    int i,n,j,temp;
    
    // input the number of element
    
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    // input the array element
    printf("Enter the array elements :");
     int a[n];
     
     // use for loop
     for(i=0; i<n; i++){
     	scanf("%d",&a[i]);
	 }
	 
    for(i=0;i<n;i++){
    	for(j=i+1; j<n; j++){
    		if (a[i]<a[j]){
    			
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
    			
			}
		}
	}
	//Display the secand  smallest and largest element
	printf("secand smallest= %d", a[n-2]);
	printf("\n");
	printf("\nsecand largest = %d",a[1]);
	return 0;
}
