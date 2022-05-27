#include<stdio.h>
int main(){
	long waterKG, initTemCel, finTemCel,energyNeeded;
	printf("Enter the amount of water in kilogram: ");
	scanf("%ld",&waterKG);
	printf("Enter the inital temperature in celcius: ");
	scanf("%ld",&initTemCel);
	printf("Enter the final temperature in celcius: ");
	scanf("%ld",&finTemCel);
	energyNeeded = waterKG * (finTemCel - initTemCel) * 4184;
	printf("energyNeeded is %ld",energyNeeded);
return 0;
}
