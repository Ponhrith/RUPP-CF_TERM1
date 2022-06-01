#include <stdio.h>
#include <math.h>
int main(){
  int integer;
  int length, squared;
  int base, hieght, triangled;
  printf("Select \n");
  printf("1) Square \n");
  printf("2) Triangle \n");
  scanf("%d",&integer);

  if (integer == 1) 
  printf("Enter Length of One side to Calculate Square: ") , 
  scanf("%d",&length) ,
  printf("%d is your area of square",squared = pow(length, 2));

  else if (integer == 2) 
  printf("Enter value of Base:"),
  scanf("%d",&base) ,
  printf("Enter value of hieght: "),
  scanf("%d",&hieght) ,
  printf("%d is your are of triangle", triangled = (hieght * base)/2);

  return 0;
}