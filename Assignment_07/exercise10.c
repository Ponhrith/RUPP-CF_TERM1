#include<stdio.h>
int main(){
	float mbi, weigh, hight;
    // weigh is kilogram
    printf("Enter the weigh(kg):");
    scanf("%f",&weigh);
    // hight is metre
    printf("Enter the hight(m):");
    scanf("%f",&hight);
    // compute follow formalar
    mbi= weigh/(hight*hight);
    printf("mbi=%f", mbi);
    //Conditions to find out BMI category
    if(mbi< 18.5 ){
    	printf(" is Underweight ");
		}else if(mbi>=18.5 , mbi<24.0 ){
			printf(" is Normal");
		}else if(mbi>=25.0 , mbi<=29.9 ){
				printf(" is overweigh ");
		}else if(mbi>= 30.0 ){
			printf(" is Obese");
		}

return 0;
}
