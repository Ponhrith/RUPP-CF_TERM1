#include<stdio.h>
int main(){
	int  i, pos_sum=0,neg_sum=0,total;
	float pos_aver=0, neg_aver=0;
	
	// input integer 10
	printf("Enter the mumber:");
	scanf("%d",&total);
	int n[total];
	
	// use for loop
	for(i=0; i<total;i++){
		printf("Enter the integer:",(i+1));	// Enter integer 
		scanf("%d",& n[i]);
	}
	 for(i=0 ; i<total ; i++){
       if(n[i] < 0){
         neg_sum += n[i];
       }else{
         pos_sum += n[i];
       }
    }
    
    // display pos_sum and neg_sum
    printf("\nPos_sum : %d",pos_sum);
    printf("\nNeg_sum : %d\n",neg_sum);
    
    // formalar of aver
    pos_aver= pos_sum/total;
    neg_aver= neg_sum/total;
    
    // display pos_aver and neg_aver
    printf("pos_aver%.2f\n",pos_aver);
    printf("neg_aver%.2f",neg_aver);

	return 0;
}
