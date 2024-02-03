#include<stdio.h>



int main(void)
{
    int num1,num2,swap;

    printf("Enter the num1 :");
    scanf("%d",&num1);

    printf("Enter the num2 :");
    scanf("%d",&num2);

    printf("Numbers before swap :%d    %d\n",num1,num2);

    swap =num1 ;  num1 = num2 ; num2 = swap ;  // swap processing numbers

    printf("Numbers after swap : %d    %d\n",num1,num2);





    return 0;
}