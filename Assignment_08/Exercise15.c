#include<stdio.h>
int main()
{
    int computer_num = 50;
    int input,count=0;
    while (count>-1)
    {
        printf("Enter the computer_num:");
        scanf("%d",&input);
        count ++;
        if (input<computer_num)
        {
            printf("To low\n");
        }
        else if (input>computer_num)
        {
            printf("To high\n");
        }
        else
        {
            printf("Well done, you took %d attemps",count);
            break;
        }
        
        
        
    }
    
}