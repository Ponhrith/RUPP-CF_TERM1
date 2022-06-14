#include<stdio.h>
int i = 0;
int main(){
    int a1[] = {2,5,0,4,3,6,2,5,3,7};
    int a2[] = {2,5,0,4,3,6,5,3,7, 8, 9, 10, 11,20, 2};

while (i< sizeof(a1))
{
    if (a1[i] == a2[i]){
        printf("%d\n",a1[i]);
    }else if(a1[i]==0){
        break;
    }

    i ++;
}
    return 0;
}


