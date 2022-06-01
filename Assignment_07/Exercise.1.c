#include<stdio.h>
int main(){
	int x, y, z;
	
	printf("Enter x = ");
	scanf("%d", &x);
	printf("Enter y = ");
	scanf("%d", &y);
	if(x > 2){
		if(y >2){
			z = x + y;
			printf("z is %d", z);		}
	}
	else
			printf("x is %d",x);
	return 0;
}
