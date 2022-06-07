#include<stdio.h>
int main()
{   
    //Create variable
    int computer_num = 50;
    int input,count=0;
    while (count>-1)
    {
        printf("Enter the computer_num:"); //Ask users to enter a number
        scanf("%d",&input);
        count ++;
        if (input<computer_num) //show too low if the input<50
        {
            printf("To low\n");
        }
        else if (input>computer_num)
        {
            printf("To high\n"); //show too high if the input>50
        }
        else
        {
            printf("Well done, you took %d attemps",count); //print well done if input = 50
            break;
        }
        
        
        
    }
    
}